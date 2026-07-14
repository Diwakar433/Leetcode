1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        
5        int maxSum = INT_MIN;
6        int currSum = 0;
7        for(auto ele : nums) {
8            currSum += ele;
9            maxSum = max(maxSum, currSum);
10
11            if(currSum < 0) {
12                currSum = 0;
13            } 
14
15        }
16        return maxSum;
17    }
18};