1class Solution {
2public:
3
4    vector<int> findDisappearedNumbers(vector<int>& nums) {
5        
6        int n = nums.size();
7        vector<int> freq(n+1, 0);
8        vector<int> ans;
9        for(int i = 0; i < n; i++) {
10            freq[nums[i]]++;
11        } 
12
13        for(int i =1; i < n+1; i++) {
14            if(freq[i] == 0) {
15                ans.push_back(i); 
16            }
17        }
18
19        return ans;
20
21    }
22};