class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            int curr = 0;
            for(int j = 0; j < n; j++) {
                if(i != j && nums[i] > nums[j])
                    curr++;
            }
            ans[i] = curr;
        }
        return ans;
    }
    
};