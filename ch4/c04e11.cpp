//c04e11
// Create a program to find all the prime numbers between 1 and 100. One way to
// do this is to write a function that will check if a number is prime (i.e.,
// see if the number can be divided by a prime number smaller than itself)
// using a vector of primes in order (so that if the vector is called primes,
// primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes
// from 1 to 100, checks each number to see if it is a prime, and stores each
// prime found in a vector. Write another loop that lists the primes you found.
// You might check your result by comparing your vector of prime numbers with
// primes. Consider 2 the first prime.

/*
    Comments:
    Since the loop is suppose to start at 1 and not 2 which is the first prime.
    I have to put an extra if in the check if prime function to handle cases
    where the passed number is less than 2. Otherwise I think it's pretty neat.
*/

#include <vector>
#include <iostream>
#include <math.h>


using namespace std;

vector<int> primes;

bool check_if_prime(int num){
    bool is_prime = true;
    double possibleFactor = sqrt(num);

    for (int factor = 2; factor <= possibleFactor; factor++){
        if (num % factor == 0 ){
            is_prime = false;
        }
    }
    if (num < 2) return !is_prime;
    return is_prime;
}

int main(){
    for (int i = 1; i < 100; i++){
        if (check_if_prime(i)){
            primes.push_back(i);
        }
    }
    
    cout << "Primes: ";
    for (auto x : primes){
        cout <<  x << ", ";
    }
}