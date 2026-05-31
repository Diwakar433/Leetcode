1class Solution {
2public:
3    int calculation(int a, int b, char op) {
4        int ans = 0;
5        switch(op) {
6
7            case '+':
8                    ans = a + b;
9                    break;
10            case '-':
11                    ans = b - a;
12                    break;
13            case '*':
14                    ans = a * b;
15                    break;
16            case '/':
17                    ans = b/a;
18            
19        }
20        return ans;
21    }
22    int evalRPN(vector<string>& tokens) {
23        
24        int n = tokens.size();
25        stack<int> st;
26        int i = 0;
27        
28        while(i < n) {
29            
30            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/" ) {
31                if(st.size() >= 2) {
32                    int a = st.top();
33                    st.pop();
34                    int b = st.top();
35                    st.pop();
36                    int ans = calculation(a,b,tokens[i][0]);
37                    st.push(ans);
38                }
39            }
40            else {
41                st.push(std::stoi(tokens[i]));
42            }
43            i++;
44        }
45
46        return st.top();
47
48    }
49};