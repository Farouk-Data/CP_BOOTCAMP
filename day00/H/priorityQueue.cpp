#include <iostream>
#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

int main(){
    vector<long long> vec;
    long long n, q;
    cin >> n >> q;
    vector<priority_queue<long long> > pqs(n);
    while (q--){
        long long choice, t, x;
        cin >> choice;
        switch (choice){
        case 0:
            cin >> t >> x;
            pqs[t].push(x);
            break;
        case 1:
            cin >> t;
            if (!pqs[t].empty())
                vec.push_back(pqs[t].top());
            break;
        case 2:
            cin >> t;
            if (!pqs[t].empty())
                pqs[t].pop();
            break;
        }
    }
    for (long long i : vec)
        std::cout << i << "\n";
    return (0);
}