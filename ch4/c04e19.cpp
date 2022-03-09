// c04e19
//
// Write a program where you first enter a set of name-and-value pairs, such as
// Joe 17 and Barbara 22. For each pair, add the name to a vector called names
// and the numbers to a vector called scores (in corresponding positions, so
// that if names[7]=="Joe" the scores[7]==17). Terminate input with NoName 0.
// Check that each name is unique and terminate with an error message if a name
// is entered twice. Write out all the (name, score) pairs (one per line).

/*
    Comments:
    Instead of terminating input using the specific line no more
    I just run the loop while cin is valid

*/

#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> names;
    std::vector<int> scores;

    std::cout << "Enter a name and number (ie. 'Joe 17')\n";
    while (!std::cin.fail()){
        std::pair<std::string, int> value_pair;

        std::cout << "Enter value pair: ";
        std::cin >> value_pair.first >> value_pair.second;
        
        // Won't add the current iteration to the vector if it is not valid
        if(!std::cin.fail()){
            bool duplicate = false;
            for (auto x : names){
                duplicate = (x == value_pair.first);
            }

            if (duplicate){
                std::cout << value_pair.first << " already exists.\n";
                continue;
            }

            names.push_back(value_pair.first);
            scores.push_back(value_pair.second);
        }
    }

    std::cout << "* List of pairs *\n";
    for (int i = 0; i < names.size(); i++){
        std::cout << "Name: " << names[i] << " | Score: " << scores[i] << std::endl;
    }
}