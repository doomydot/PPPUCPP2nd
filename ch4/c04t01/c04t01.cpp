#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    constexpr double yen_per_dollar = 113.95;
    constexpr double euro_per_dollar = 0.89;
    constexpr double pounds_per_dollar = 0.74;
    
    double value;
    char unit;
    
    cout << "Please enter a value followed by a currency(y, e, p): ";
    cin >> value >> unit;

    if (unit == 'y')
    {
        cout << value << " converts to " << value / yen_per_dollar << " USD.";
    }

    else if (unit == 'e')
    {
        cout << value << " converts to " << value / euro_per_dollar << " USD.";
    }

    else if (unit == 'p')
    {
        cout << value << " converts to " << value / pounds_per_dollar << " USD.";

    }

    else
    {
        cout << "Your input was incorrect.";
    }

}

