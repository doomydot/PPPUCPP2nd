// chapter 4 drill step 5-11
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <string>

using namespace std;

const double cm_to_m = 0.01;
const double in_to_m = 0.0254;
const double ft_to_m = 0.3048;
const vector<string> accepted_units =
{
    "cm",
    "m",
    "in",
    "ft"
};

bool isLegal(string unit_string)
{
    if (find(accepted_units.begin(), accepted_units.end(), unit_string) != accepted_units.end())
        return true;
    else
        return false;
}

double convert_to_m(double value, string unit)
{
    if (unit == "cm") return value * cm_to_m;
    else if (unit == "in") return value * in_to_m;
    else if (unit == "ft") return value * ft_to_m;
    else return value;
}

int main()
{
    double temp = 0;
    double smallest = 0;
    double largest = 0;
    const double tolerance = 1.0 / 100;
    string unit = "";
    double sum = 0;
    int amount = 0;
    vector<double> entries;

    while (cin >> temp >> unit)
    {
        if (!isLegal(unit))
        {
            cout << "You've entered an invalid unit.\n";
            cout << "Accepted units: cm, m, in, ft.\n";
            continue;
        }
            

        cout << "Value entered: " << temp << unit << endl;
        
        sum += convert_to_m(temp, unit);
        ++amount;
        entries.push_back(convert_to_m(temp, unit));

        if (smallest == 0 || largest == 0)
        {
            smallest = temp;
            largest = temp;
        }
            
        if (temp > largest)
        {
            largest = temp;
            cout << temp << " was largest so far!\n";
        }
        if (temp < smallest)
        {
            smallest = temp;
            cout << temp << " was smallest so far!\n";
        }
    }

    sort(entries.begin(), entries.end());
    cout << "Entries: ";
    for (auto x : entries)
        cout << x << "m ";
    cout << endl;

    cout << "---------\n";
    cout << smallest << " was the smallest value.\n";
    cout << largest << " was the largest value.\n";
    cout << "Number of values: " << amount << ".\n";
    cout << "The total sum is " << sum << " m.\n";
}