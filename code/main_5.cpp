#include <iostream>
#include <string>

int main(){
    std::string text;
    std::string newText;
    std::getline(std::cin, text);
    for (int i = 1; i < text.length() +1; i++){
        if (text[i] != text[i-1]){
            newText += text[i-1];
        }
    }

    std::cout << newText << std::endl;

    return 0;
}