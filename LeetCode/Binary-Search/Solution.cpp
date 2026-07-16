1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        
5        int n = nums.size();
6        
7        int low = 0, high = n-1;
8        
9        while(low < high) {
10            
11            int mid = low + (high-low)/2;
12            
13            if(nums[mid] >= target)
14                high = mid;
15            else
16                low = mid+1;
17        }
18        
19        if(nums[low] != target)
20            return -1;
21        
22        return low;
23    }
24};