#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

double val1 = 0;
double val2 = 0;
string op;

int main()
{
    cout << "Enter the first value: ";
    cin >> val1;
    cout << "Enter the second value: ";
    cin >> val2;
    cout << "Enter an operand: ";
    cin >> op;

    if (op == "+" || op == "plus") cout << "Result: " << val1 + val2;
    else if (op == "-" || op == "minus") cout << "Result: " << val1 - val2;
    else if (op == "*" || op == "mul") cout << "Result: " << val1 * val2;
    else if (op == "/" || op == "div") cout << "Result: " << val1 / val2;
    else cout << "Your input is incorrect.";

}
/*
Write a program that takes an operation followed by two operands and outputs the result. For example
    + 100 3.14
    * 4 5

Read the operation into a string called operation and use an if statement to figure out which operation the user wants,
for example, if (operation == “+”). Read the operands into variables of type double.
Implement this for operations called +, -, *, /, plus, minus, mul and div with their obvious meanings.
*/