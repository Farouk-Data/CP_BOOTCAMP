#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
using namespace std;

int main(){
    int num;
    std::string tmp;
    std::stack<std::string> stk;
    std::vector<int> arr;
    std::getline(std::cin, tmp);
    std::istringstream iss(tmp);
    iss >> num;
    while (num) {
        int first;
        std::string second;

        std::cin >> first;
        switch (first){
        case 1:
            std::cin >> second;
            stk.push(second);
            break;
        case 2:
            if (stk.size() > 0)
                stk.pop();
            break;
        case 3:
            if (stk.size() > 0)
                // std::cout << stk.top() << "\n";
                printf("%s\n", stk.top());
            else
                // std::cout << "Empty!" << "\n";
                printf("Empty!\n");
            break;        
        default:
            break;
        }
        num--;
    }
    std::cout << std::endl;
    return (0);
}