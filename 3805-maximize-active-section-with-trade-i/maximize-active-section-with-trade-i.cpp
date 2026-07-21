#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        // Step 1: Count existing '1's
        int total_ones = 0;
        vector<int> zero_groups;
        int current_zeros = 0;
        
        for (char c : s) {
            if (c == '1') {
                total_ones++;
                if (current_zeros > 0) {
                    zero_groups.push_back(current_zeros);
                    current_zeros = 0;
                }
            } else {
                current_zeros++;
            }
        }
        if (current_zeros > 0) {
            zero_groups.push_back(current_zeros);
        }
        
        // Step 2: Find the maximum sum of two adjacent '0' blocks
        int max_trade_gain = 0;
        if (zero_groups.size() >= 2) {
            for (size_t i = 0; i < zero_groups.size() - 1; ++i) {
                max_trade_gain = max(max_trade_gain, zero_groups[i] + zero_groups[i + 1]);
            }
        }
        
        return total_ones + max_trade_gain;
    }
};
