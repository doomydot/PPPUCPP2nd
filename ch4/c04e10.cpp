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
    This ended up being somewhat more advanced than I anticipated,
    but I'm pretty happy with the end result. If you follow along
    you should read up on cin.clear() and cin.ignore() aswell as what
    numeric_limits<streamsize>::max() does.

    But basically I just divide the excersize into 3 parts, setup,
    gameloop and round calculation. 
    I also keep track of stats and display them to the user at the end.
*/
#include <iostream>
#include <vector>
#include <limits>
#include <map>

using namespace std;

vector<char> comp_moves;


int num_moves = 0;

int wins = 0;
int losses = 0;
int draws = 0;

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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }   
    }

    cout << "Enter the moves of the computer (r, p, s). One move per message.\n";

    for (int i = 0; i < num_moves; i++){
        char temp = ' ';
        cout << "Move #" << i+1 << ": ";
        if (cin >> temp && (temp == 'r' || temp == 'p' || temp == 's')){
            comp_moves.push_back(temp);
        }
        else{
            cout << "You must provide valid input (r, p, s).\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            --i;
        }
    }
}

char calculate_round(char user, char comp){
    switch(user){
        case 'r':
            if (comp == 'r') return 'd';
            else if (comp == 'p') return 'l';
            else if (comp == 's') return 'w';
            break;
        case 'p':
            if (comp == 'r') return 'w';
            else if (comp == 'p') return 'd';
            else if (comp == 's') return 'l';
            break;
        case 's':
            if (comp == 'r') return 'l';
            else if (comp == 'p') return 'w';
            else if (comp == 's') return 'd';
            break;
    }
}

void gameloop(){
    map<char, string> moves = {
        {'r', "rock"},
        {'p', "paper"},
        {'s', "scissor"}
    };
    map<char, string> result_types = {
        {'w', "win"},
        {'l', "loss"},
        {'d', "draw"}
    };

    cout << "The game is starting! \n";

    for (int i = 0; i < size(comp_moves); i++){
        char move = ' ';
        cout << "Enter your move (r, p, s): ";
        cin >> move;
        if (!cin.fail() && (move == 'r' || move == 'p' || move == 's')){
            char outcome = calculate_round(move, comp_moves[i]);
            switch (outcome)
            {
            case 'w': //win
                ++wins;
                break;
            case 'l': //loss
                ++losses;
                break;
            case 'd': //draw
                ++draws;
                break;
            }
            cout << "You played " << moves[move] << " and the computer played " << moves[comp_moves[i]] << ". Resulting in a " << result_types[outcome] << "!\n";
        }
        else{
            cout << "You must provide valid input (r, p, s).\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            --i;
        }
    }
}

int main()
{   
    game_setup();
    gameloop();

    cout << "The game is finished.\n";
    cout << "Wins: " << wins << " | Losses: " << losses << " | Draws: " << draws << endl; 
}

