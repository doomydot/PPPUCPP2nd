// c04e12
// Modify the program described in the previous exercise to take an input value
// max and then find all the prime numbers from 1 to max.
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
    int max = 0;
    cout << "Find prime numbers up to: ";
    cin >> max;

    for (int i = 1; i < max; i++){
        if (check_if_prime(i)){
            primes.push_back(i);
        }
    }
    for (auto x : primes)
        cout << x << endl; 
}