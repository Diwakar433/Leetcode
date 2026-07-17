#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        // Step 1: Find the maximum value in nums to bound our loops
        int mx = *max_element(nums.begin(), nums.end());
        
        // Count frequencies of each number in the input array
        vector<long long> count(mx + 1, 0);
        for (int num : nums) {
            count[num]++;
        }
        
        // gcd_pair_count[g] will store the exact number of pairs with GCD equal to g
        vector<long long> gcd_pair_count(mx + 1, 0);
        
        // Step 2: Compute actual GCD pairs backwards
        for (int i = mx; i >= 1; i--) {
            long long multiples = 0;
            
            // Count total elements in nums that are multiples of i
            for (int j = i; j <= mx; j += i) {
                multiples += count[j];
            }
            
            // Total pairs formed by these multiples
            long long total_pairs = (multiples * (multiples - 1)) / 2;
            
            // Remove pairs whose actual GCD is a strictly greater multiple of i
            for (int j = 2 * i; j <= mx; j += i) {
                total_pairs -= gcd_pair_count[j];
            }
            
            gcd_pair_count[i] = total_pairs;
        }
        
        // Step 3: Build a prefix sum array of pair counts
        // prefix_sums[i] tells us the total pairs with a GCD <= i
        vector<long long> prefix_sums(mx + 1, 0);
        for (int i = 1; i <= mx; i++) {
            prefix_sums[i] = prefix_sums[i - 1] + gcd_pair_count[i];
        }
        
        // Step 4: Answer each query using binary search (std::upper_bound)
        vector<int> ans;
        ans.reserve(queries.size());
        
        for (long long q : queries) {
            // Find the first GCD value index where the cumulative pair count is > q
            auto it = upper_bound(prefix_sums.begin(), prefix_sums.end(), q);
            int actual_gcd = distance(prefix_sums.begin(), it);
            ans.push_back(actual_gcd);
        }
        
        return ans;
    }
};
