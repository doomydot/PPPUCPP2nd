// c04e13
//
// Create a program to find all the prime numbers between 1 and 100. There is
// a classic method for doing this, called "Sieve of Eratosthenes". If you
// don't know that method, get on the web and look it up. Write your program
// using this method.

/*
    Comments: 
    The method stated by Wikipedia @ https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
    1. Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).
    2. Initially, let p equal 2, the smallest prime number.
    3. Enumerate the multiples of p by counting in increments of p from 2p to n, 
    and mark them in the list (these will be 2p, 3p, 4p, ...; the p itself should not be marked).
    4. Find the smallest number in the list greater than p that is not marked. 
    If there was no such number, stop. Otherwise, let p now equal this new number 
    (which is the next prime), and repeat from step 3.
    5. When the algorithm terminates, the numbers remaining not marked in the list are all the 
    primes below n.
    ----------------------

    My end goal was to have a vector filled with prime numbers, meaning I 
    have to delete vector elements that are not prime. Therefore I can assume that
    every number in my vector is unmarked.

    Another (simpler) method could be to use the index of a vector as numbers, and
    mark them using 0 or 1 as their value.

    I'm really happy with how this one works.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
    int limit = 100;
    int prime = 2;
    
    vector<int> numbers;

    cout << "Find primes from 1 to :";
    cin >> limit;
    // Step 1: Use a vector as a list of numbers.
    for (int i = 2; i < limit; i++){
        numbers.push_back(i);
    }

    // Step 5: terminate when when the remaning elements of the vector are primes
    while (prime < sqrt(limit)){
        // Step 3: enumerate the multiples of prime and removes these from the vector
        for (int i = 2; i < limit; i++){
            vector<int>::iterator position = find(numbers.begin(), numbers.end(), i*prime);
            if (position != numbers.end()){
                numbers.erase(position);
            }
        }
        // Step 4: Since the marked numbers are removed, the next element in the list is the prime.
        // find returns an iterator, an iterator - numbers.begin() = index
        // numbers[index] + 1 = next prime
        prime = numbers[(find(numbers.begin(), numbers.end(), prime) - numbers.begin()) + 1];
        
    }

    cout << "Primes: ";
    for (auto x : numbers){
            cout << x << ", ";
    }
    
}