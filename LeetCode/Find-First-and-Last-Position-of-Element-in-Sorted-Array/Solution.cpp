1class Solution {
2public:
3    int first_true(vector<int>& nums, int target) {
4        int low = 0, high = nums.size()-1;
5        
6        while(low < high) {
7            
8            int mid = low + (high-low)/2;
9            
10            if(nums[mid] >= target)
11                high = mid;
12            else
13                low = mid+1;
14        }
15        if(nums[low] != target)
16            return -1;
17        
18        return low;
19    }
20    int last_false(vector<int>& nums, int target) {
21        
22        int low = 0, high = nums.size()-1;
23        
24        while(low < high) {
25            
26            int mid = low + (high-low+1)/2;
27            
28            if(nums[mid] > target)
29                high = mid-1;
30            else
31                low = mid;
32        }
33        if(nums[low] != target)
34            return -1;
35        
36        return low;
37    }
38public:    
39    vector<int> searchRange(vector<int>& nums, int target) {
40     
41        if(nums.size() == 0)
42            return {-1, -1};
43        
44        int x = first_true(nums, target);
45        int y = last_false(nums, target);
46        
47        
48        return {x, y};
49    }
50};