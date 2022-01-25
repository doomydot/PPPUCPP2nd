#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double find_average(vector<double> values)
{
    double sum = 0;
    for (auto x : values) sum += x;
    return sum / values.size();
}

int main()
{
    vector<double> distances;
    double total_distance = 0;


    cout << "Enter distance: ";
    double temp = 0;
    while (cin >> temp)
    {
        distances.push_back(temp);
    }


    for (auto x : distances) total_distance += x;
    cout << "This routes total distance is " << total_distance << " km\n";

    sort(distances.begin(), distances.end());
    cout << "The shortest distance between two cities along this route is " << distances[0] << " km\n";
    cout << "The longest distance between two cities along this route is " << distances.back() << " km\n";
    cout << "The mean distance between two neighbouring cities along this route is " << find_average(distances) << " km\n";
}

