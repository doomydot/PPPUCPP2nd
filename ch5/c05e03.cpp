#include <iostream>
/*
Absolute zero is the lowest temperature that can be reached; it is -273.15C, or 0K. 
The above program even when corrected, will produce erroneous results when given a 
temperature below this. Place a check in the main program that will produce an error
if a temperature is given below -273.15C.
*/


double ctok(double c){
    int k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    std::cin >> c;
    
    if (c < -273.15){
        std::cout << "Please provice a temperature above the absolute zero.";
        return 0;
    }
    double k = ctok(c);
    std::cout << k << std::endl;
}