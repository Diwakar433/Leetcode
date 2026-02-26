1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        
5        int ans;
6        int n = nums.size();
7        // if(n == 2)
8        //     nums[0];
9        
10        sort(nums.begin(), nums.end());
11        
12        for(int i = 0; i < nums.size()-1; i++) {
13                if(nums[i] == nums[i+1])
14                     ans = nums[i];
15        }
16        return ans;
17    }
18};