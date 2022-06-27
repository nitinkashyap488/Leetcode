class Solution:
    def romanToInt(self, s: str) -> int:
        mp = {'I':1, 'V':5, 'X':10, 'L':50, 'C': 100, 'D':500, 'M':1000}
        sum = 0
        for i in range(len(s)-1):
            if mp[s[i]] < mp[s[i+1]]:
                sum -= mp[s[i]]
            else:
                sum += mp[s[i]]
                
        return sum + mp[s[len(s)-1]]