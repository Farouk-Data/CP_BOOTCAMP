#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <cmath>

int main(){
    int tmp, len, pos1, pos2, target;
    std::map<int, int> mp;
    std::cin >> len >> target;

    for (int i = 0; i < len; i++){
        std::cin >> tmp;
        int res = std::abs(tmp - target);
        std::map<int,int>::iterator it = mp.find(res);
        if (it != mp.end())
        {
            pos1 = it->second + 1;
            pos2 = i + 1;
            break;
        }
        else
            mp.insert(std::make_pair(tmp, i));
    }
    std::cout << pos1 << " " << pos2 << "\n";
}