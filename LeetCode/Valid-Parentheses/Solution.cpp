1class Solution {
2public:
3    bool isValid(string s) {
4        
5        stack<char> st;
6
7        for(auto ch : s) {
8
9            if(st.size() > 0 && ((ch == ')' && st.top() == '(') || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '['))) {
10                st.pop();
11            }
12            else {
13                st.push(ch);
14                }
15
16        }
17
18
19        if(st.size() == 0) {
20            return true;
21        }
22        return false;
23    }
24};