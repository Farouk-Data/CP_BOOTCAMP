#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <stdio.h>

int main(){
    int num;
    std::vector<std::string> vec;

    scanf("%d", &num);
    while (num--) {
        std::string line;
        std::stack<char> stk;
        std::cin >> line;
        for (int i = 0; i < line.size(); i++){
            if (stk.empty())
                stk.push(line[i]);
            else if ((line[i] == ']'  && stk.top() == '[') ||
                    (line[i] == '}'  && stk.top() == '{') || 
                    (line[i] == ')'  && stk.top() == '('))
                stk.pop();
            else
                stk.push(line[i]);
        }
        if (stk.empty())
            vec.push_back("Yes");
        else
            vec.push_back("No");
    }
    for (int i = 0 ; i < vec.size(); i++)
        printf("%s\n", vec[i].c_str());
    return (0);
}

// ([]) 
// (([()]))) 
// ([()[]()])() 
// ()()()()({})({}{})( 
// ({}{}{}{}{}[][]()()) 

// ({}}})
// [](
// {{{{{{]
// ()[]{}]]]
// ({[
// }])