#include <iostream>
#include <string>

void emailCheck(std::string& email){
    for (int i = 0; i < email.length(); i++){
        email[i] = tolower(email[i]);
    }

    for(int i = 0; i < email.length(); i++){
        if (email[i] == '@'){
            email = email.substr(0,i);
            break;
        }
    }

    for(int i = 0; i < email.length(); i++){
        if(email[i] == '+'){
            email.erase(i);
            break;
        }
    }

    for (int i = 0; i < email.length(); i++){
        if (email[i] == '.'){
            email.erase(i,1);
            i--;
        }
    }
}

int main(){
    bool same = false;
    std::string email1;
    std::string email2;
    std::cin >> email1 >> email2;

    emailCheck(email1);
    emailCheck(email2);

    if (email1 == email2){
        same = true;
    }

    if(same){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }


    return 0;
}