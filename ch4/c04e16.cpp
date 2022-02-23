//c04e16
// In the drill, you wrote a program that, given a series of numbers, found the
// max and min of that series. The number that appears the most times in
// a sequence is called the mode. Create a program that finds the mode of a set
// of positive integers.

/*
    Comments:
    I implemented this solution
    https://stackoverflow.com/questions/2488941/find-which-numbers-appears-most-in-a-vector

    However if there are several modes this solution will only reveal the first one.
    If we wanted to keep track of multiple modes we would either need a seperate vector
    to keep track of the occurances, or instead use a map.
*/
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    vector<int> numbers;
    int max = 0;
    
    cout << "How many numbers do you want to enter: ";
    cin >> max;

    for (int i = 0; i < max; i++){
        int temp = 0;
        cout << "Enter a number: ";
        cin >> temp;
        numbers.push_back(temp);
    }

    sort(numbers.begin(), numbers.end());

    int counter = 0;
    int highest_count = 0;
    int mode = 0;

    // After sorting the numbers, we iterate through it and keep a counter
    // we increment when the current number is the same as the previous number
    // we also track the highest value of the counter and reset the counter when
    // it doesn't match.
    for (int i = 0; i < size(numbers); i++){
        if (numbers[i] == numbers[i-1]){
            ++counter;
            if (counter > highest_count){
                highest_count = counter;
                mode = numbers[i];
            }
        }
        else {
            counter = 0;
        }
    }

    // We print highest_count + 1 as the first occurance is not measured in the for loop above.
    if (highest_count == 0) cout << "There is no most common number";
    else cout << "The most common number is " << mode << " and it appeared " << highest_count+1 << " times.";
}