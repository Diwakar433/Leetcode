class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        if(a[0] < b[0] ){
            return true;
        }
        return false;
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), compare);

        vector<vector<int>> ans;

        for(int i = 0; i < intervals.size(); i++) {

            if(ans.size() == 0) {
                ans.push_back(intervals[i]);
            }
            else if(intervals[i][0] > ans[ans.size()-1][1]) {
                ans.push_back(intervals[i]);
            }
            else {
                ans[ans.size()-1][1] = max(ans[ans.size()-1][1],intervals[i][1]);
            }
        }

        return ans;
    }
};