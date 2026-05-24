1class Solution {
2    public int jump(int[] nums) {
3        int n = nums.length;
4        if (n == 1)
5            return 0;
6
7        int step = 1;
8        int maxIdx = Math.min(nums[0], n-1);
9        int currIdx = 1;
10        while (currIdx < n) {
11            if (maxIdx >= n - 1)
12                return step;
13            int nextMaxIdx = -1;
14            for (int i = currIdx; i <= maxIdx; i++) {
15                nextMaxIdx = Math.max(nextMaxIdx, i + nums[i]);
16            }
17            currIdx = maxIdx + 1;
18            maxIdx = Math.min(nextMaxIdx, n-1);
19            step++;
20        }
21        return 0;
22    }
23}