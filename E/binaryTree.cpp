#include <iostream>
#include <string>
#include <stdio.h>
#include <set>
#include <sstream>

int main(){
    std::string line;
    std::set<std::string> st;

    while (std::getline(std::cin, line)){
        std::istringstream iss(line);
        std::string cmd, num;
        iss >> cmd >> num;

        if (cmd == "insert")
            st.insert(num);
        else if (cmd == "exists"){
            if (st.find(num) != st.end())
                printf("true\n");
            else
                printf("false\n");
        }
        else if (cmd == "delete")
            st.erase(num);
    }
    return (0);
}