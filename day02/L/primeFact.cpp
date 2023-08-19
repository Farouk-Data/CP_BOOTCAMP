#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#define LL long long
using namespace std;
 
void factorize(LL n, vector<LL> &vec)
{
    while (n % 2 == 0)
    {
        vec.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            vec.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        vec.push_back(n);
}

int main(){
    LL in;
    cin >> in;
    vector<LL> vec;
    factorize(in, vec);
    cout << in << ": " ;
    for(LL i = 0; i < vec.size(); i++){
        cout << vec[i];
        if (i < vec.size())
            cout << " ";
    }
    return (0);
}