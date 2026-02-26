1class Solution {
2    public int findDuplicate(int[] nums) {
3        
4        HashMap<Integer, Integer> map = new HashMap<>();
5
6        for(int i = 0; i < nums.length; i++) {
7            if(map.containsKey(nums[i]))
8                return nums[i];
9            else
10                map.put(nums[i], 1);
11        }
12
13        return 0;
14    }
15}