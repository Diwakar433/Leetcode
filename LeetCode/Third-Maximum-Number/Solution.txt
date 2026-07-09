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
11            if (ele == first || ele == second || ele == third) {
12                continue;
13            }
14
15            if(ele > first) {
16                third = second;
17                second = first;
18                first = ele;
19            }
20            else if(ele > second) { // ele != first is already guaranteed
21                third = second;
22                second = ele;
23            }
24            else if(ele > third) {  // ele != second is already guaranteed
25                third = ele;
26            }
27        }
28        
29        // If third was never updated, a 3rd distinct max doesn't exist
30        if(third == LLONG_MIN)
31            return first;
32            
33        return third;
34    }
35};
36