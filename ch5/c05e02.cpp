#include <iostream>
/*
double ctok(double c){
    int k = c + 273.15;
}


int main(){
    double c = 0;
    cin >> d;
    double k = ctok("c");
    Cout << k << endl;
}
*/

/*
    Errors:
    Namespace not defined.
    reads into d instead of c
    passes a char into ctok instead of a double
    return statement lacked ; and didn't return k
*/


double ctok(double c){
    int k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << std::endl;
}