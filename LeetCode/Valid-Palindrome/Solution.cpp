1class Solution {
2public:
3    char toLower(char ch) {
4        if(ch >= 'A' && ch <= 'Z')
5            ch += 32;
6        
7        return ch;
8    }
9
10    bool alphabet(char ch) {
11        // Support digits (0-9) as standard LeetCode tests include them
12        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
13            return true;
14        
15        return false;
16    }
17
18    bool isPalindrome(string s) {
19        int n = s.size();
20        int i = 0, j = n - 1;
21
22        while(i < j) {
23            // Step 1: If left character is invalid, skip it immediately
24            if(!alphabet(s[i])) {
25                i++;
26            }
27            // Step 2: If right character is invalid, skip it immediately
28            else if(!alphabet(s[j])) {
29                j--;
30            }
31            // Step 3: Both characters are valid alphabets/digits, compare them
32            else {
33                if(toLower(s[i]) != toLower(s[j])) {
34                    return false; // Found a mismatch, not a palindrome
35                }
36                i++;
37                j--;
38            }
39        }
40        
41        // If the loop finishes without returning false, it is a valid palindrome
42        return true;
43    }
44};
45