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