// c04e20
//
// Modify the program from exercise 19 so that when you enter a name, the
// program will output the corresponding score or 'name not found'.

/*
    Comments:
    Instead of terminating input using the specific line no more
    I just run the loop while cin is valid



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
    

    std::string temp;
    std::cout << "Enter a name to see if it's in the list. (Case-sensitive)\n";
    
    //reset cin so that the below while will be true :)
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (!std::cin.fail()){
        bool found = false;
        
        std::cout << "Name: ";
        std::cin >> temp;
        for (int i = 0; i < names.size(); i++){
            if (names[i] ==  temp){
                found = true;
                std::cout << names[i] << "'s score is " << scores[i] << std::endl;
            }
        }
        if(!found){
                std::cout << "Name not found.\n";
            }
    }
}