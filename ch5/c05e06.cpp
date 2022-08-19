#include <iostream>
#include <stdlib.h>
/*
    Write a program that converts from Celsius to Fahrenheit and from Fahrenheit to Celsius
    Use estimation to see if your results are plausible.

    Solution:
        To convert a temperature from C to F
        we take (C * 1.8) + 32
        Likewise with F to C
        we take (F - 32) * 0.5556
*/

double ctof(double c){
    if (c < -273.15){
        std::cout << "Please provice a temperature above the absolute zero." << std::endl;
        abort();
    }
    double f = (c * 1.8) + 32;
    return f;
}

double ftoc(double f){
    if (f < -491.67){
        std::cout << "Please provide a temperature above absolute zero." << std::endl;
        abort();
    }
    double c = (f-32)* 0.5556;
    return c;

}

int main(){
    double temp = 0;
    double result = 0;
    char denominator = 'A';
    std::cout << "Celsius <--> Fahrenheit Converter" << std::endl;
    

    while (denominator != 'C' && (denominator != 'F'))
    {
        std::cout << "Enter a temperature to convert including its denominator (ie. 35C): " << std::endl << "> ";
        std::cin >> temp >> denominator;

        if (denominator == 'C'){
            result = ctof(temp);
            std::cout << result << 'F' << std::endl;
        }

        else {
            double result = ftoc(temp);
            std::cout << result << 'C' << std::endl;
        }
    }



}