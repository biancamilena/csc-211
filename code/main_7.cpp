#include <iostream>
#include <vector>
#include <cmath>

int main(){
    std::vector<std::vector<int>> coordsVec;
    std::vector<int> points;

    int value;
    int largest[] = {0,0};
    int lowest[] = {101,101};

    while(std::cin >> value){
        points.push_back(value);

        if (points.size() == 2){
            coordsVec.push_back(points);
            points.clear();
        }
    }

    int max = 0;
    for (int i = 0; i < coordsVec.size(); i++){
        std::vector<int> temp = coordsVec[i];
        for(int j = i+1; j < coordsVec.size(); j++){
            int dx = coordsVec[i][0] - coordsVec[j][0];
            int dy = coordsVec[i][1] - coordsVec[j][1];

            int dist = sqrt(dx*dx + dy*dy);
            if (dist > max){
                max = dist;
            }
        }
    }

    std::cout << max << std::endl;

    return 0;
}