#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string input;
    std::getline(std::cin, input);
    std::vector<int>checked;
    int asciiValue;

    /*CSC 211 c++*/
    /*CSC 211 c++*/
    /*CS 21c+*/
    /*asciiValue = static_cast<int>(input[i]);*/

    for (int i = 0; i < input.length(); i++){
        asciiValue = static_cast<int>(input[i]);
        
        int unique = 0;
        for (int j = 0; j < checked.size();j++){
            if (asciiValue == checked[j]){
                unique = 1;
                break;
            }
        }
        
        if (unique == 0){
            checked.push_back(asciiValue);
        }
    }

    std::cout << checked.size() << std::endl;

    return 0;
}