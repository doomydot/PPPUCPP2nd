#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int val1 = 0;

int main()
{
    cout << "Enter a number: ";
    cin >> val1;

    if (val1 % 2 == 0) cout << "The value " << val1 << " is an even number.";
    else cout << "The value " << val1 << " is an uneven number.";
}
/*
Write a program to test an integer value to determine if it is odd or even.
As always, make sure your output is clear and complete. In other words, don’t just output “yes” or “no”.
Your output should stand alone, like “The value 4 is an even number.” Hint: See the remainder (modulo) operator in §3.4.
*/