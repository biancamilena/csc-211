#include <iostream>
#include <string>

void grabHostname(std::string& url){
    for (int i = 0; i < url.length(); i++){
        url[i] = tolower(url[i]);
    }

    for (int i = 0; i < url.length()-2; i++){
        if(url[i] == ':' && url[i+1] == '/' && url[i+2] == '/'){
            url.erase(0,i+3);
            break;
        }
    }

    for (int i =0; i < url.length(); i++){
        if (url[i] == '/' || url[i] == ':'){
            url.erase(i, url.length()-1);
            break;
        }
    }

}


int main(){
    std::string url;
    std::cin >> url;

    grabHostname(url);

    std::cout << url << std::endl;

    return 0;
}