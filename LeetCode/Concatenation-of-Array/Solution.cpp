1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        
5        int n = nums.size();
6        vector<int> ans(2*n);
7
8        int i = 0, j = 0;
9        while(i < n && j < 2*n) {
10            ans[j] = nums[i];
11            j++;i++;
12            if(i == n)
13                i = 0;
14        }
15        return ans;
16    }
17};