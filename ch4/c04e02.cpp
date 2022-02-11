//c04e02
// If we define the median of a sequence as "a numbet do that exactly as many
// elements come before it in the sequence as come after it", fix the program
// in 4.6.3 do that it always prints out a median. Hint: A median need not to
// be an element of the sequence.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


double find_median(vector<double> values)
{
    int n = values.size();
    if (n % 2 != 0)
    {
        return values[n / 2.0];
    }
    return (double)(values[(n - 1) / 2] + values[n / 2]) / 2.0;
}

double find_average(vector<double> values)
{
    double sum = 0;
    for (auto x : values) sum += x;
    return sum / values.size();
}

int main()
{
    vector<double> temps;
    double temp;

    while (cin >> temp)
    {
        temps.push_back(temp);
    }

    cout << "Average temperature: " << find_average(temps) << endl;
    cout << "Median temperature: " << find_median(temps) << endl;
}