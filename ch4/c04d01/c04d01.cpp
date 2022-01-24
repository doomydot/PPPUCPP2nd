// chapter 4 drill step 1-5
#include <iostream>

using namespace std;

double a, b = 0;
const double tolerance = 1.0 / 100;

int main()
{
    
    while (cin >> a >> b)
    {
        if (a == b)
            cout << "The numbers are equal.";

        else
        {

            if (a > b)
            {
                cout << "The smaller value is " << b << endl;
                cout << "The larger value is " << a << endl;
            }

            else if (b > a)
            {
                cout << "The smaller value is " << a << endl;
                cout << "The larger value is " << b << endl;
            }

            if (abs(a - b) < tolerance)
                cout << "The numbers are almost equal." << endl;
            
        }
    }
}