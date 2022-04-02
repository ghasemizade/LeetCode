/* 
Runtime = 10 ms
Memory Usage = 8.2 MB
*/

class Solution {
public:
    int romanToInt(string s) {
        
    unordered_map<char,int> ronum;
        
   ronum['I'] = 1;
   ronum['V'] = 5;
   ronum['X'] = 10;
   ronum['L'] = 50;
   ronum['C'] = 100;
   ronum['D'] = 500;
   ronum['M'] = 1000;
   
   int romanToInt = 0;
   
    for(int counter = 0; counter < s.length(); counter++)
        {
            if(ronum[s[counter]] < ronum[s[counter+1]])
            {
                romanToInt += ronum[s[counter+1]]- ronum[s[counter]];
                counter++;
            }
            else
            {
                romanToInt += ronum[s[counter]];
            }
        }
        return romanToInt;
    }
};