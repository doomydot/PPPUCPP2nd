//c04e05
// Write a program that performs as very simple calculator. Your calculator
// should be able to handle the four basic math operations - add, substract,
// multiply, and divide - on two input values. Your program should prompt the
// user to enter three arguments: two double values and a character to
// represent an operation. If the entry arguments are 35.6, 24.1 and '+', the
// program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6 we
// look at a much more sophisticated simple calculator.

#include <iostream>

using namespace std;

int main()
{
    double a = 31;
    double b = 4;
    char op = ' ';

    cout << "Enter two values and an operand(divided by spaces): \n";
    cin >> a >> op >> b;

    switch (op)
    {
    case '%':
        cout << "The remainder of " << a << " / " << b << " is " << (int)a%(int)b << ".";
        break;

    case '+':
        cout << "The sum of " << a << " + " << b << " is " << a + b << ".";
        break;

    case '-':
        cout << "The sum of " << a << " - " << b << " is " << a - b << ".";
        break;

    case '/':
        cout << "The sum of " << a << " / " << b << " is " << a / b << ".";
        break;

    case '*':
        cout << "The sum of " << a << " * " << b << " is " << a * b << ".";
        break;
    
    default:
        cout << "Your input was bad.";
    }
}