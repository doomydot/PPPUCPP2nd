#include <iostream>
#include <map>

using namespace std;

int pennies, nickels, dimes,
    quarters, halfdollars = 0;

int main()
{
    cout << "Enter coin amounts below.\n";

    // Idk how correct it is to write the input on the same row
    // but it sure looks prettier, and makes more sense at a glance
    cout << "Pennies: ";        cin >> pennies;
    cout << "Nickels: ";        cin >> nickels;
    cout << "Dimes: ";          cin >> dimes;
    cout << "Quarters: ";       cin >> quarters;
    cout << "Half-dollars: ";   cin >> halfdollars;

    cout << "----\n";

    // some more ternary operators (short hand if else statements)
    // to make sure the output is grammatically correct
    cout << "You have " << pennies << ((pennies > 1 || pennies < 1) ? " pennies." : " penny.") << "\n";
    cout << "You have " << nickels << ((nickels > 1 || nickels < 1) ? " nickels." : " nickel.") << "\n";
    cout << "You have " << dimes << ((dimes > 1 || quarters < 1) ? " dimes." : " dime.") << "\n";
    cout << "You have " << quarters << ((quarters > 1 || quarters < 1) ? " quarters." : " quarter.") << "\n";
    cout << "You have " << halfdollars << ((halfdollars > 1 || halfdollars < 1) ? " half-dollars." : " half-dollar.") << "\n";

    // I cast to a double and divide by 100 to get the dollar amount.
    cout << "The total value of all your coins is: $" << (double)(pennies + (nickels * 5) + (dimes * 10) + (quarters * 25) + (halfdollars * 50)) / 100;
}