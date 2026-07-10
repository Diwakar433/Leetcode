1class Solution {
2    public boolean isPalindrome(String s) {
3        StringBuilder sb = new StringBuilder();
4        for(char ch : s.toCharArray()){
5            if(Character.isLetterOrDigit(ch)){
6                sb.append(Character.toLowerCase(ch));
7        }
8    }
9    if(sb.toString().equals(sb.reverse().toString())){
10    return true;
11    }
12    return false;
13}   
14    
15}