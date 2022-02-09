/*
 There is an old story that the emperor wants to thank the inventor of
 the game of chess and asked the inventor to name his reward. The
 inventor asked for one grain of rice for the first square (of a chess board,
 supposedly), 2 for the second, 4 for the third, and so on, doubling for
 each of the 64 squares. That may sound modest, but there wasn't that much
 rice in the empire! Write a program to calculate how many squares are
 required to give the inventor at least 1000 grains of rice, at least
 1,000,000 grains, and at least 1,000,000,000 grains. You'll need a loop, of
 course, and probably an int to keep track of which square you are at, an int
 to keep the number of grains on the current square, and an int to keep track
 of the grains on all previous squares. We suggest that you write out the
 value of all your variables for each iteration of the loop so that you can
 see what's going on.
*/



#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int squares = 64;
    int rice = 1;
    int square_rice = 1;

    const vector<int> thresholds = { 1000, 1000000, 1000000000 };
    int current_threshold_index = 0;
    
    for (int i = 1; i <= squares; i++)
    {
        cout << "Square #" << i << " | ";
        cout << "Current: " << square_rice << " | ";
        square_rice *= 2;
        cout << "Previous: " << rice << endl;
        

        if (rice >= thresholds[current_threshold_index])
        {
            cout << "On square #" << i << " the count reached over " << thresholds[0] << " with it being " << rice << endl;
            ++current_threshold_index;

            if (current_threshold_index == thresholds.size())
                break;
        }

        rice += square_rice;
        
    }
}