1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        
5        vector<int> ans(2*n);
6
7        int i = 0, j = n, k = 0;
8        while(k  < 2*n) {
9            if(k%2==0) {
10                ans[k] = nums[i];
11                i++;
12            }
13            else {
14                ans[k] = nums[j];
15                j++;
16            }
17            k++;
18
19        }
20
21        return ans;
22    }
23};