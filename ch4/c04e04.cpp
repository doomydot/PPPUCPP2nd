//c04e04
// Read a sequence of double values into a vector. Think of each value as the
// distance between two cities along a given route. Compute and print the total
// distance (the sum of all distances). Find and print the smallest and
// greatest distance between two neighboring cities. Find and print the mean
// distance between two neighboring cities.

#include <iostream>

using namespace std;

int main()
{
    int min = 1;
    int max = 100;
    int guess = floor((min+max)/2);
    cout << "Think of a number between 1-100.\n";

    while (min != max)
    {
        guess = floor((min + max) / 2);
        char answer;
        cout << "Is the number less than " << guess << "? (y/n)\n";
        cin >> answer;

        if (answer == 'y')
        {
            max = guess;
        }

        else if (answer == 'n')
        {
            min = guess + 1;
        }
        else cout << "Sorry I didn't quite catch that, again?\n";
    }
    cout << "Your number is " << guess;
}
