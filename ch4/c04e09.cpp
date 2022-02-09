// c04e09
// Try to calculate the number of rice grains that the inventor asked for in
// exercise 8 above. You'll find that the number is so large that it won't
// fit in an int or a double. Observe what happens when the number gets too
// large to represent exactly as an int and as a double. What is the largest
// number of squares for which you can calculate the exact number of grains
// (using an int)? What is the largest number of squares for which you can
// calculate the approximate number of grains (using a double)?

/* 
Comments:
Using an int overflows on square 32.
A double seems to work for the full 64.
Testing further, a double will give an infinite value on square 1024.
*/

#include <iostream>

using namespace std;

int main()
{
    int squares = 64;
    int rice = 1;
    int square_rice = 1;
    double drice = 1;
    double dsquare_rice = 1;
    
    int current_threshold_index = 0;

    for (int i = 1; i <= squares; i++)
    {
        cout << "Square #" << i << " | Int rice: " << rice << " | Double rice: " << drice << endl;
        square_rice = square_rice * 2;    
        rice += square_rice;
        dsquare_rice = dsquare_rice * 2;
        drice += dsquare_rice;      
    }
}


