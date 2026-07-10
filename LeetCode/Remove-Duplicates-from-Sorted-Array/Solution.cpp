1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        
5        int n = nums.size();
6        int i = 0, j = 1;
7        while(i < n && j < n) {
8            if(nums[j-1] != nums[j]) {
9                nums[i] = nums[j-1];
10                i++;
11            }
12            j++;
13        }
14        nums[i++] = nums[n-1];
15
16        return i;
17    }
18};