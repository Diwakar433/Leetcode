1class Solution {
2    public int removeDuplicates(int[] nums) {
3        int k = 1;
4        int n = nums.length;
5
6        for(int i = 1; i < n; i++) {
7            if(nums[i] != nums[i-1]) {
8                nums[k++] = nums[i];
9            }
10        }
11        return k;
12    }
13}