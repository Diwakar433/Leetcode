1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4
5        int i = 0, j = 0;
6        int n = nums.size();
7        while(i < n && j < n) {
8
9            if(nums[j] != 0) {
10                nums[i] = nums[j];
11                i++;j++;
12            }
13            else {
14                j++;
15            }
16               
17        }
18        while(i < n) {
19            nums[i] = 0;
20            i++;
21        }
22
23    }
24};