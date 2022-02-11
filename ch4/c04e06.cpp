//c04e06
// Make a vector holding ten string values "zero", "one", ... "nine".
// Use that in a program that converts a digit to its corresonding
// spelled-out value; e.g. the input 7 gives the output seven. Hava
// the same program, using the same input loop, convert spelled-out
// numbers into their digit form; e.g. the input seven gives the
// output 7.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> string_values = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	vector<string> number_values = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	string temp = " ";

	cout << "Input a digit to get its name, or the reverse: ";
	while (cin >> temp)
	{	
		bool was_found = false;
		
		cout << "Your input was " << temp << ".\n";

		for (int i = 0; i < string_values.size(); i++)
		{
			if (temp == string_values[i])
			{
				cout << number_values[i];
				was_found = true;
			}
			else if (temp == number_values[i])
			{
				cout << string_values[i];
				was_found = true;
			}
		}
		if (!was_found)
		{
			cout << "Your input must be 0-9 either numerically or spelled out.\n";
			cout << "Input a digit to get its name, or the reverse: ";
		}
	}
}
