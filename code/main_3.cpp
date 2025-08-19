#include <iostream>
#include <string>
/*reverse*/


int main(){
    std::string reverse;
    std::getline(std::cin, reverse);

    for (int i = reverse.length()-1; i >= 0; i--){
        std::cout << reverse[i];
    }
    std::cout << std::endl;

    return 0;
}