/*
Run time ==> 0ms
memory usage ==> 8.7 mb
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int sum = 0 , temp =1;
        int size = digits.size()-1;
        
	        for ( int counter = size; counter >= 0; counter--)
			{
	            sum = ( digits[counter] + temp ) % 10;
				temp = ( digits[counter] + temp ) / 10;
	            digits[counter] = sum; 
	        }
	        if ( temp > 0 )
			{
	            auto it = digits.insert(digits.begin(), temp);
	        }
        return digits;
    }
};