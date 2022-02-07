#include <iostream>
#include <vector>

using namespace std;


vector<string> string_values = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
vector<string> number_values = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
vector<int> integer_values = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

int convert_to_int(string value)
{
    for (int i = 0; i < string_values.size(); i++)
    {
        if (value == string_values[i])
        {
            return integer_values[i];
        }
        else if (value == number_values[i])
        {
            return integer_values[i];
        }
    }  
}

int main()
{
    string a = " ";
    string b = " ";
    int a_val = 0;
    int b_val = 0;
    char op = ' ';

    
    cout << "Enter two values and an operand(divided by spaces): \n";
    cin >> a >> op >> b;
    a_val = convert_to_int(a);
    b_val = convert_to_int(b);
   
    switch (op)
    {
    case '%':
        cout << "The remainder of " << a_val << " / " << b_val << " is " << a_val % b_val << ".";
        break;

    case '+':
        cout << "The sum of " << a_val << " + " << b_val << " is " << a_val + b_val << ".";
        break;

    case '-':
        cout << "The sum of " << a_val << " - " << b_val << " is " << a_val - b_val << ".";
        break;

    case '/':
        cout << "The sum of " << a_val << " / " << b_val << " is " << a_val / b_val << ".";
        break;

    case '*':
        cout << "The sum of " << a_val << " * " << b_val << " is " << a_val * b_val << ".";
        break;

    default:
        cout << "Your input was bad.";
    }
    
}