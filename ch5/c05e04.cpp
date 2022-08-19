#include <iostream>
#include <stdlib.h>
/*
Do exercise 3 again, but this time handle the error inside ctok().
*/


double ctok(double c){
    if (c < -273.15){
        std::cout << "Please provice a temperature above the absolute zero." << std::endl;
        abort();
    }
    int k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    std::cin >> c;
    
    double k = ctok(c);
    std::cout << k << std::endl;
}