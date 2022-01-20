#include <iostream>
#include <string>
#include <vector>

using namespace std;

double val1 = 0;
double val2 = 0;

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
Modify the program above to ask the user to enter floating-point values and store them in double variables. 
Compare the outputs of the two programs for some inputs of your choice. Are the results the same? Should they be? What’s the difference?
*/