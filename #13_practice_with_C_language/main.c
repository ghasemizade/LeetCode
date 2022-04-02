/*
Runtime = 4 ms
Memory Usage = 6 MB
*/




int romanToInt(char * s){
    int Temp = 0;
    
        for (int counter = 0; counter < strlen(s); counter++)
        {
            switch(s[counter])
            {
                case 'I':
                    Temp += 1;
                    break;
                case 'V':
                    Temp += 5;
                    break;
                case 'X':
                    Temp += 10;
                    break;
                case 'L':
                    Temp += 50;
                    break;
                case 'C':
                    Temp += 100;
                    break;
                case 'D':
                    Temp += 500;
                    break;
                case 'M':
                    Temp += 1000;
                    break;
            }
            if(s[counter] == 'I' && (s[counter+1] == 'V' || s[counter+1] == 'X'))
            {
                Temp -= 2;
            }
             if(s[counter] == 'X' && (s[counter+1] == 'L' || s[counter+1] == 'C'))
            {
                Temp -= 20;
            }
             if(s[counter] == 'C' && (s[counter+1] == 'D' || s[counter+1] == 'M'))
            {
                Temp -= 200;
            }
        }
    return Temp;
}