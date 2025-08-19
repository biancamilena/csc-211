#include <iostream>
#include <string> 

int main(){
    std::string input;
    std::getline(std::cin, input);
    int asciiValue, hash = 0;

    for (int i = 0; i < input.length(); i++){
        asciiValue = static_cast<int>(input[i]);
        hash += asciiValue;
    }
    
    std::cout << hash << std::endl;
    return 0;
}