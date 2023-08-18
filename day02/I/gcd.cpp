#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define LL long long
using namespace std;


int main(){
    LL N, g = 0, in = 0;
    cin >> N;

    for (LL i = 0; i < N; i++){
        cin >> in;
        g = __gcd(g, in);
    }
    cout << g << "\n";
    return (0);
}