//c04e15
// Write a program that takes an input
// value n and then finds the first n primes.


/*
    Comments:
        The solution we used previously in excersize 12 fits better for this
        We modify the condition of the for loop to instead care for how many
        primes we've already found.

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
    int number_of_primes = 0;
    cout << "Enter how many primes you want: ";
    cin >> number_of_primes;

    
    for (int i = 1; primes.size() < number_of_primes; i++){
        
        if (check_if_prime(i)){
            primes.push_back(i);
        }
    }
    for (auto x : primes)
        cout << x << endl; 
}