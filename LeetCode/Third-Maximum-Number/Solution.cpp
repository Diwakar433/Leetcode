1class Solution {
2public:
3    int thirdMax(vector<int>& nums) {
4        // 1. Use long long to prevent INT_MIN conflicts
5        long long first = LLONG_MIN;
6        long long second = LLONG_MIN;
7        long long third = LLONG_MIN;
8
9        for(auto ele : nums) {
10            // 2. Skip duplicates immediately
11        
12            if(ele > first) {
13                third = second;
14                second = first;
15                first = ele;
16            }
17            else if(ele > second && ele < first) { // ele != first is already guaranteed
18                third = second;
19                second = ele;
20            }
21            else if(ele > third && ele < second) {  // ele != second is already guaranteed
22                third = ele;
23            }
24        }
25        
26        // If third was never updated, a 3rd distinct max doesn't exist
27        if(third == LLONG_MIN)
28            return first;
29            
30        return third;
31    }
32};
33