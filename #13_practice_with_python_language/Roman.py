class Solution:
    def romanToInt(self, s: str) -> int:
        
        ronum = {"I" : 1, "V" : 5, "X" : 10, "L" : 50, "C" : 100, "D" : 500, "M" : 1000}
        
        Temp = 0;
        
        for counter in range (len (s)):
            if counter + 1 < len(s) and ronum[s[counter]] < ronum[s[counter+1]]:
                Temp -=ronum[s[counter]]
            else:
                Temp += ronum[s[counter]]
                
        return Temp    