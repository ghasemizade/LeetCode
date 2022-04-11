/*
This program can print the same part of the first words in array
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    char now;
    string result = "";
    int val = 0;
    
        
	 for(int counter = val; counter < strs[val].size() ; counter++)
     { 
            now = strs[0][counter]; 
            bool check = false;
            
            for(int counter1 = 0; counter1 < strs.size(); counter1++)  
		    {
                char temp = strs[counter1][counter];
                
                    if(temp == now)
                    {
                        check = true;
                    }    
                    else
                    {
                        check = false;
                        break;
                    }
                }
            
                if(check == true)
                {
                    result += now;
        	    }
                else
                {
                    return result;
        	    }
        }
        return result;
    }     
};