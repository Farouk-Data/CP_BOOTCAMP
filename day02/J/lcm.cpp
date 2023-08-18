#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#define LL long long
using namespace std;

int main(){
        LL a,b;
        cin >> a >> b;
        cout << (a*b)/__gcd(a, b) << "\n";
        return (0);
}