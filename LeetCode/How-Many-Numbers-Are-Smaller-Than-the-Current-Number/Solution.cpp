1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        
5        int n = nums.size();
6        vector<int> ans(n);
7
8        for(int i = 0; i < n; i++) {
9            int curr = 0;
10            for(int j = 0; j < n; j++) {
11                if(i != j && nums[i] > nums[j])
12                    curr++;
13            }
14            ans[i] = curr;
15        }
16        return ans;
17    }
18    
19};