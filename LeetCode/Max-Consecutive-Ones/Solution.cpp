1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        
5        int n = nums.size();
6        int cnt = 0, max_len = 0;
7
8        for(auto ele : nums) {
9            if(ele == 1) {
10                cnt++;
11                max_len = max(max_len, cnt);
12            }
13            else {
14                cnt = 0;
15            }
16        }
17        return max_len;
18    }
19};