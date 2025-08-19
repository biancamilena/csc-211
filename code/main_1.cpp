#include <iostream>
#include <vector>
/*count first*/

int main(){
    std::vector<int> seq;
    int num = 0;

    while (std::cin >> num){
        seq.push_back(num);
    }

    if(seq.empty()){
        std::cout << 0 << std::endl;
        return 0;
    }

    int target = seq[0];
    int counter = 0;

    for (int j = 0; j < seq.size(); j++){
        if (seq[j] == target){
            counter++;
        }
    }

    std::cout << counter << std::endl;
    return 0;
}