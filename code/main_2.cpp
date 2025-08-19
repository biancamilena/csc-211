#include <iostream>
#include <string>
#include <cctype>
/*palindrome*/

int main(){
    std::string test;
    std::getline(std::cin, test);
    bool palindrome = true;

    for (int i = 0; i < test.length(); i++){
        test[i] = tolower(test[i]);
    }

    for (int i = 0; i < test.length()/2; i++){
        if (test[i] != test[test.length()-i-1]){
            palindrome = false;
            break;
        }
    }

    if (palindrome){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }

    return 0;
}