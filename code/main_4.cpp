#include <iostream>


int main(){
    int current,temp;
    bool sorted = true;

    std::cin >> current;

    while(std::cin >> temp){
        if (current < temp){
            sorted = false;
        }
    }

    if(sorted){
        std::cout << "Sorted" << std::endl;
    }
    else{
        std::cout << "Not Sorted" << std::endl;
    }

    return 0;
}