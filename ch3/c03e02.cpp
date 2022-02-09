#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int miles = 0;
    cout << "Mile to km converter.\n";
    cout << "Enter miles: ";
    cin >> miles;

    cout << endl << "Your miles in km: " << miles * 1.609;
}