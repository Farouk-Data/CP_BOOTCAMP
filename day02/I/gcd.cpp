#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define LL long long
using namespace std;

LL gcd(LL a, LL b) {
    if (b == 0) return a;
        return gcd(b, a % b);
}

int main(){
    LL N, g, in = 0;
    cin >> N;

    for (LL i = 0; i < N; i++){
        cin >> in;
        g = gcd(g, in);
    }
    cout << g << "\n";
    return (0);
}