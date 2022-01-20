#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string val;
map<string, int> numbers =
{
    {"zero", 0 },
    {"one", 1 },
    {"two", 2 },
    {"three", 3 },
    {"four", 4 }
};

int main()
{
    cout << "Spell out a number: ";
    cin >> val;

    if (numbers.find(val) != numbers.end())
        cout << numbers[val];
    else cout << "I don't know that number.";

}
/*
Write a program that converts spelled-out numbers such as “zero” and “two” into digits,
such as 0 and 2. When the user inputs a number, the program should print out the corresponding digit.
Do it for the values 0, 1, 2, 3 and 4 and write out “not a number I know” if the user enters something that doesn’t correspond.
*/