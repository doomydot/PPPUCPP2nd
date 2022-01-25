#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    constexpr double yen_per_dollar = 113.95;
    constexpr double euro_per_dollar = 0.89;
    constexpr double pounds_per_dollar = 0.74;
    constexpr double kroner_per_dollar = 9;
    constexpr double yuan_per_dollar = 6.33;

    double value;
    char unit;

    cout << "Please enter a value followed by a currency (y (JPY), e (EUR), p (GBP), k (NOK), u (CNY)): ";
    cin >> value >> unit;

    switch (unit) {

    case 'y':
        cout << value << " JPY converts to " << value / yen_per_dollar << " USD.";
        break;

    case 'e':
        cout << value << " EUR converts to " << value / euro_per_dollar << " USD.";
        break;

    case 'p':
        cout << value << " GBP converts to " << value / pounds_per_dollar << " USD.";
        break;

    case 'k':
        cout << value << " NOK converts to " << value / kroner_per_dollar << " USD.";

        break;
    
    case 'u':
        cout << value << " CNY converts to " << value / yuan_per_dollar << " USD.";
        break;

    default:
        cout << "Your input was incorrect.";
    }
}

