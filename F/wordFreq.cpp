#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <map>
#include <string.h>

int main() {
    int num, hold = 0;
    std::string input;
    std::vector<std::string> vec;
    std::map<std::string,int> mp;
    std::map<std::string, int>::iterator it;

    std::getline(std::cin, input);
    std::istringstream iss(input);
    iss >> num;
    while (num--) {
        std::getline(std::cin, input);
        vec.push_back(input);
    }
    for (const std::string &str : vec)
        mp[str]++;

    std::pair<std::string, int> maxVal = std::make_pair("", 0);
    for (it = mp.begin(); it != mp.end(); it ++)
    {
        if (it->second >= maxVal.second && strcmp(it->first.c_str(), maxVal.first.c_str()) > 0)
                maxVal = std::make_pair(it->first, it->second);
    }
    std::cout << maxVal.first << " " << maxVal.second << "\n";
    return (0);
}