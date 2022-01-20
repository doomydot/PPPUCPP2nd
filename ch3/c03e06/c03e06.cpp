#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int val1, val2, val3 = 0;
vector<int> arr;

int main()
{
    cout << "Value 1: ";
    cin >> val1;
    cout << "Value 2: ";
    cin >> val2;
    cout << "Value 3: ";
    cin >> val3;

    arr.push_back(val1);
    arr.push_back(val2);
    arr.push_back(val3);
    sort(arr.begin(), arr.end());

    for (auto x : arr)
    {
        if (x != arr.back()) cout << x << ",";
        else cout << x << ".";
    }

}

/*
Write a program that prompts the user to enter three integer values, and then outputs the values in numerical sequence separated by commas.
So, if the user enters the values 10 4 6, the output should be 4, 6, 10. If two values are the same, they should just be ordered together.
So, the input 4 5 4 should give 4, 4, 5.
*/