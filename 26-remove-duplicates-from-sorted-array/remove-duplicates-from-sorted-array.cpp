class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i = 0, j = 1;
        while(i < n && j < n) {
            if(nums[j-1] != nums[j]) {
                nums[i] = nums[j-1];
                i++;
            }
            j++;
        }
        nums[i++] = nums[n-1];

        return i;
    }
};