#include <iostream>
#include <stdlib.h>
/*
Add to the program so that it can also convert from Kelvin to Celsius
*/

double ctok(double c){
    if (c < -273.15){
        std::cout << "Please provice a temperature above the absolute zero." << std::endl;
        abort();
    }
    double k = c + 273.15;
    return k;
}

double ktoc(double k){
    if (k < 0){
        std::cout << "Please provide a temperature above absolute zero." << std::endl;
        abort();
    }
    double c = k - 273.15;
    return c;

}

int main(){
    double temp = 0;
    double result = 0;
    char denominator = 'A';
    std::cout << "Celsius <--> Kelvin Converter" << std::endl;
    

    while (denominator != 'C' && denominator != 'K')
    {
        std::cout << "Enter a temperature to convert including its denominator (ie. 35C): " << std::endl << "> ";
        std::cin >> temp >> denominator;
        
        if (denominator == 'C'){
            result = ctok(temp);
            std::cout << result << 'K' << std::endl;
        }

        else if (denominator == 'K') {
            double result = ktoc(temp);
            std::cout << result << 'C' << std::endl;
        }
    }
    

    
    

    
}