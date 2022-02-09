// c04e10.cpp
// Write a program that plays the game "Rock, Paper, Scissors". 
// Use a switch-statement to solve this exercise. Also, the machine should
// give random answers (i.e., select the next rock, paper or scissors
// randomly). Real randomness is too hard to provide just now, so just build
// a vector with a sequence of values to be used as "the next value". If you
// build the vector into the program, it will always play the same game, so
// maybe you should let the user enter some values. Try variations to make it
// less easy for the user to guess which move the machine will make next.

/*
Comments:
I'm not completely sure how the cin.ignore() works. I get that I need to flush the cin
for the next iteration of the loop. But I fail to understand why I need both cin.clear + cin.ignore
*/
#include <iostream>
#include <vector>

using namespace std;

vector<char> comp_moves;
int num_moves = 0;

void game_setup(){
    cout << "Rock, Paper, Scissors.\n";
    cout << "--------------\n";
    cout << "+ Setup +\n";
    
    while (num_moves < 1){
        cout << "Enter how many moves you want the computer to make: ";
        cin >> num_moves;
        if (cin.fail()){
            cout << "You must enter a valid number!\n";
            cin.clear();
            cin.ignore(256, '\n');
        }   
    }

    cout << "Enter the moves of the computer (r, p, s). One move per message.\n";

    for (int i = 0; i < num_moves; i++){
        char temp = 0;
        cout << "Move #" << i+1 << ": ";
        if (cin >> temp && (temp == 'r' || temp == 'p' || temp == 's')){
            comp_moves.push_back(temp);
        }
        else{
            cout << "You must provide valid input (r, p, s).\n";
            cin.clear();
            cin.ignore(256, '\n');
            --i;
        }
    }
}

void gameloop(){

}

int main()
{   
    string machine_feed = "";
    string temp = "";


    game_setup();
    gameloop();

}

