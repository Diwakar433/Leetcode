class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // 1. Use long long to prevent INT_MIN conflicts
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for(auto ele : nums) {
            // 2. Skip duplicates immediately
        
            if(ele > first) {
                third = second;
                second = first;
                first = ele;
            }
            else if(ele > second && ele < first) { // ele != first is already guaranteed
                third = second;
                second = ele;
            }
            else if(ele > third && ele < second) {  // ele != second is already guaranteed
                third = ele;
            }
        }
        
        // If third was never updated, a 3rd distinct max doesn't exist
        if(third == LLONG_MIN)
            return first;
            
        return third;
    }
};
