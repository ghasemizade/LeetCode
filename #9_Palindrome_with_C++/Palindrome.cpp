class Solution {
public:
    bool isPalindrome(int x) {
        //palendrome should not be negetive
        if(x < 0)
            return false;
            //dfine variable for use them
        int tempx = x;
        long int modnum = 0;
        long int rev = 0;
        
        while (x != 0)
        {
            modnum = x % 10;
            rev = rev * 10 + modnum;
            x /= 10;
        }
        //check number for palndrome number or not
        if (tempx == rev)
        {
            return true;
        }
        else
            return false;
    }    
};