// c04e17
// Write a program that finds the min, max and the mode of a sequence of
// strings.

/*
    Comments:
    We use the same implementation as in e16 to find the mode.
    Then we just check the length of the strings to find the longest/shortest string.
*/
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <limits>

using namespace std;


int main(){
    
    vector<string> sequence;
    int max = 0;
    
    cout << "How many numbers do you want to enter: ";
    cin >> max;

    for (int i = 0; i < max; i++){
        string temp = "";
        cout << "Enter a string: ";
        cin >> temp;

        if (cin.fail()){
            cout << "You must enter a valid string!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            --i;
        } 

        else{
            sequence.push_back(temp);
        }
    }
    
    // After sorting the numbers, we iterate through it and keep a counter
    // we increment when the current number is the same as the previous number
    // we also track the highest value of the counter and reset the counter when
    // it doesn't match.
    int counter = 0;
    int highest_count = 0;
    string mode = "";
    sort(sequence.begin(), sequence.end());
    for (int i = 0; i < size(sequence); i++){
        if (sequence[i] == sequence[i-1]){
            ++counter;
            if (counter > highest_count){
                highest_count = counter;
                mode = sequence[i];
            }
            
        }
        else {
            counter = 0;
        }
    }

    string sequence_min = "";
    string sequence_max = "";
    for (int i = 0; i < size(sequence); i++){
        if (i == 0){
            sequence_max = sequence[i];
            sequence_min = sequence[i];
        }

        if (sequence[i].length() > sequence_max.length())
            sequence_max = sequence[i];

        if (sequence[i].length() < sequence_min.length())
            sequence_min = sequence[i];
        
    }

    // We print highest_count + 1 as the first occurance is not measured in the for loop above.
    if (highest_count == 0) cout << "There is no most common word.";
    else cout << "The most common word is " << mode << " and it appeared " << highest_count+1 << " times.\n";
    cout << "The min is the word: " << sequence_min << " at " << sequence_min.length() << " characters.\n";
    cout << "The max is the word: " << sequence_max << " at " << sequence_max.length() << " characters.\n";
}