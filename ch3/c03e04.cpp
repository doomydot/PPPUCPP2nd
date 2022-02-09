#include <iostream>
#include <string>
#include <vector>

using namespace std;

int val1 = 0;
int val2 = 0;

int main()
{
    cout << "Enter two whole numbers: " << endl;
    cout << "Number 1: "; cin >> val1;
    cout << "Number 2: "; cin >> val2;
    cout << "---" << endl;;

    // This is a ternary operator that is basically a shorthand if..else statement. google C++ Short hand If else
    // You could also just use a regular if else statement.
    cout << "Smallest: " << ((val1 > val2) ? val2 : val1) << endl;
    cout << "Largest: " << ((val1 > val2) ? val1 : val2) << endl;
    cout << "Sum: " << val1 + val2 << endl;
    cout << "Difference: " << ((val1 > val2) ? val1 - val2 : val2 - val1) << endl;
    cout << "Product: " << val1 * val2 << endl;
    cout << "Ratio: " << ((val1 > val2) ? val1 / val2 : val2 / val1) << endl;
}

/*
Write a program that prompts the user to enter two integer values. 
Store these values in int variables named val1 and val 2. 
Write your program to determine the smallest, largest sum, difference, product and ratio of these values and report them to the user.
*/