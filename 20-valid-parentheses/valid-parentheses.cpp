class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;

        for(auto ch : s) {

            if(st.size() > 0 && ((ch == ')' && st.top() == '(') || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '['))) {
                st.pop();
            }
            else {
                st.push(ch);
                }

        }


        if(st.size() == 0) {
            return true;
        }
        return false;
    }
};