#include <iostream>
#include <string>
using namespace std;

int value(char Temp)
{   
	if (Temp == 'I' && 'i')
		return 1;
	if (Temp == 'V' && 'v')
		return 5;
	if (Temp == 'X' && 'x')
		return 10;
	if (Temp == 'L' && 'l')
		return 50;
	if (Temp == 'C' && 'c')
		return 100;
	if (Temp == 'D' && 'd')
		return 500;
	if (Temp == 'M' && 'm')
		return 1000;
		
	return -1;
}
    
	int sum;
	
	int RomanToNumber (string & roman)
	{
		for (int counter = 0; counter < roman.length(); counter++) {
		
			int s1 = value(roman[counter]);

			if (counter + 1 < roman.length()) 
			{
			
				int s2 = value(roman[counter + 1]);

			
				if (s1 >= s2) {
			
					sum = sum + s1;
				}
				else 
				{
			
					sum = sum + s2 - s1;
					counter++;
				}
			}
		else {
			sum = sum + s1;
		}
	}
	return sum;
}

int main()
{
	string roman;
	cout << "Enter roman number :";
	cin >> roman;
	cout << RomanToNumber(roman);

	return 0;
}

