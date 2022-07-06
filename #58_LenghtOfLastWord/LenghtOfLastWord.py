class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        count = 0
        for i in s.strip(): # Strip removes spaces from starting and ending  
            count += 1
            if i == " ":
                count = 0 
        return count