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
