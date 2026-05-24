1class Solution {
2    public int[] twoSum(int[] nums, int target) {
3				int n = nums.length;
4        int i = 0, j = 1;
5        
6        int[] ans = new int[2];
7        
8        while(i < n && j < n) {
9            
10            if(nums[i]+nums[j] == target) {
11                ans[0] = i;
12                ans[1] = j;
13            }    
14            
15            j++;
16            
17            if(j == n) {
18                i++;
19                j = i+1;
20            }
21                
22        }
23        
24        return ans;
25    }
26}