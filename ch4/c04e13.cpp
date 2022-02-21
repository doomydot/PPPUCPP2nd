// c04e13
//
// Create a program to find all the prime numbers between 1 and 100. There is
// a classic method for doing this, called "Sieve of Eratosthenes". If you
// don't know that method, get on the web and look it up. Write your program
// using this method.
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;



int main(){
    int limit = 100;
    int prime = 2;
    
    vector<int> numbers;

    for (int i = 2; i < limit; i++){
        numbers.push_back(i);
    }

    while (prime < sqrt(limit)){
        for (int i = 2; i < limit; i++){
            vector<int>::iterator position = find(numbers.begin(), numbers.end(), i*prime);
            if (position != numbers.end()){
                cout << "Removing " << i*prime << endl;
                numbers.erase(position);
            }
        }
        // find returns an iterator, an iterator - numbers.begin() = index
        // numbers[index] + 1 = next prime
        prime = numbers[(find(numbers.begin(), numbers.end(), prime) - numbers.begin()) + 1];
        cout << "New Prime: " << prime << endl;
        
    }

    cout << "Primes: ";
    for (auto x : numbers){
            cout << x << ", ";
    }
    
}