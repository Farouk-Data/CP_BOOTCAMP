#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>

int main(){
    int num;
    std::stack<long long> stk;
    scanf("%d", &num);
    while (num) {
        int first;
        long long second;

        scanf("%d", &first);
        switch (first){
        case 1:
            scanf("%lld", &second);
            stk.push(second);
            break;
        case 2:
            if (stk.size() > 0)
                stk.pop();
            break;
        case 3:
            if (stk.size() > 0)
                printf("%lld\n", stk.top());
            else
                printf("Empty!\n");
            break;        
        default:
            break;
        }
        num--;
    }
    return (0);
}