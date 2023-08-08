#include <iostream>
#include <string>
#include <stdio.h>
#include <set>
#include <sstream>
#include <vector>

int main(){
    std::string line;
    std::set<std::string> st;
    std::vector<std::string> vec;

    while (std::getline(std::cin, line)){
        std::istringstream iss(line);
        std::string cmd, num;
        iss >> cmd >> num;

        if (cmd == "insert")
            st.insert(num);
        else if (cmd == "exists"){
            if (st.find(num) != st.end())
                vec.push_back("true");
            else
                vec.push_back("false");
        }
        else if (cmd == "delete")
            st.erase(num);
    }
    for (const std::string& str : vec)
        printf("%s\n", str.c_str());
    return (0);
}