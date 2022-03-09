// c04e21
//
// Modify the program from exercise 19 so that when you enter an integer, the
// program will output all the names with that score or score not found.

/*
    Comments:
    Instead of terminating input using the specific line no more
    I just run the loop while cin is valid

    The output is kinda ugly but w/e, I just want to get into the next chapter
    at this point.
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

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
    

    
    std::cout << "Enter a score to see if anyone has it.\n";
    
    //reset cin so that the below while will be true :)
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (!std::cin.fail()){
        bool found = false;
        int temp;
        

        std::cout << std::endl << "Score: ";
        std::cin >> temp;
        
        for (int i = 0; i < scores.size(); i++){
            if (scores[i] ==  temp){
                found = true;
                std::cout << names[i] << ", ";
            }
        }
        if(!found){
                std::cout << "Score not found.\n";
            }
    }
}