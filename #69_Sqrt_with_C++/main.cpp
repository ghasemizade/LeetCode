class Solution {
public:
    int mySqrt(int x) {
        
        int l = 0;
        int temp = x;
        while(l <= temp)
        {
            long long sqr = l + (temp - l) / 2;
			
            if(sqr * sqr == x)
            {
                return sqr;
            }    
            else if(sqr * sqr > x)
            {    
                temp = sqr - 1;
            }   
            else
            {    
                l = sqr + 1;
            }   
        }
        return temp;
    }
};