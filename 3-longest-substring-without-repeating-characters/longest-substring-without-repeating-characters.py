class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        vis = set()

        count = 0
        ans = 0

        i = 0
        while i < len(s):
            if s[i] in vis : 
                vis.clear()
                i = i-count
                count = 0
            else :
                vis.add(s[i])
                count+=1
                if count > ans :
                    ans = count
            i += 1

        return ans


        