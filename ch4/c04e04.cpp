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
