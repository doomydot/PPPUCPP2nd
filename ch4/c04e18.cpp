// c04e18
//
// Write a program to solve quadratic equations. A quadratic equation is of the
// form:    ax^2 + bx + c = 0
// If you don't know the quadratic formula for solving such an expression, do
// some research. Remenber, researching how to solve a problem is often
// necessary before a programmer can teach the computer how to solve it. Use
// doubles for the user input for a, b and c. Since there are two solutions to
// a quadratic equation, output both x1 and x2.

/*
    Comments: 
    The quadratic formula is: x = (-b +- sqrt(b^2 - 4ac)) / 2a
    I will try not using namespace std and manually write std::

*/
#include <iostream>
#include <math.h>

int main(){

    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;
    std::cout << "Enter a quadratic equation(ax^2 + bx + c = 0).\n";
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    // if the (b*b) - (4*a*c) portion is negative
    // the root is imaginary and will return NaN
    x1 = (-b + sqrt((b*b) - (4*a*c))) / 2*a;
    x2 = (-b - sqrt((b*b) - (4*a*c))) / 2*a;

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
}