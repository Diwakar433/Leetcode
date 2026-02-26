1class Solution {
2    public int findDuplicate(int[] nums) {
3        Arrays.sort(nums);
4
5        for(int i=0; i < nums.length-1; i++) {
6            if(nums[i] == nums[i+1]) {
7                return nums[i];
8            }
9        }
10        return -1;
11    }
12}