#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

int main(){
    int num;
    std::string tmp;
    std::stack<int> stk;
    std::vector<int> arr;
    std::getline(std::cin, tmp);
    std::istringstream iss(tmp);
    iss >> num;
    while (num) {
        int tmp2;
        std::getline(std::cin, tmp);
        std::istringstream iss(tmp);
        while (iss >> tmp2)
            arr.push_back(tmp2);
        switch (arr[0]){
        case 1:
            stk.push(arr[1]);
            break;
        case 2:
            if (stk.size() > 0)
                stk.pop();
            break;
        case 3:
            if (stk.size() > 0)
                std::cout << stk.top() << std::endl;
            else
                std::cout << "Empty!" << std::endl;
            break;        
        default:
            break;
        }
        num--;
    }
    return (0);
}