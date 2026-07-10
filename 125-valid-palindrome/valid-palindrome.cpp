class Solution {
public:
    char toLower(char ch) {
        if(ch >= 'A' && ch <= 'Z')
            ch += 32;
        
        return ch;
    }

    bool alphabet(char ch) {
        // Support digits (0-9) as standard LeetCode tests include them
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
            return true;
        
        return false;
    }

    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n - 1;

        while(i < j) {
            // Step 1: If left character is invalid, skip it immediately
            if(!alphabet(s[i])) {
                i++;
            }
            // Step 2: If right character is invalid, skip it immediately
            else if(!alphabet(s[j])) {
                j--;
            }
            // Step 3: Both characters are valid alphabets/digits, compare them
            else {
                if(toLower(s[i]) != toLower(s[j])) {
                    return false; // Found a mismatch, not a palindrome
                }
                i++;
                j--;
            }
        }
        
        // If the loop finishes without returning false, it is a valid palindrome
        return true;
    }
};
