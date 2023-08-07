#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <stdio.h>

int main(){
    int num;
    std::string line;
    std::vector<std::string> vec;
    std::stack<char> stk;

    scanf("%d", &num);
    while (num) {
        int flag = 1;
        std::cin >> line;
        for (int i = 0; i < line.size(); i++){
            if (line[i] == '[' || line[i] == '{' || line[i] == '(')
                stk.push(line[i]);
            else if ((line[i] == ']'&& stk.size() > 0  && stk.top() == '[') ||
                    (line[i] == '}' && stk.size() > 0 && stk.top() == '{') || 
                    (line[i] == ')' && stk.size() > 0 && stk.top() == '('))
                stk.pop();
            else{
                flag = 0;
                vec.push_back("No");
                break;
            }
        }
        if (flag == 1)
            vec.push_back("Yes");
        if (stk.size() != 0)
            vec.push_back("No");
        num--;
    }
    for (int i = 0 ; i < vec.size(); i++)
        printf("%s\n", vec[i].c_str());
    return (0);
}