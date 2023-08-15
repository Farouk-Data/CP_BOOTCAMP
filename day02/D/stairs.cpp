#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

#define LL long long 

using namespace std;

int main(){

    LL delta,x,in;
    cin >> in;

    delta = 1 + 8 * in;
    x = (-1 + sqrt(delta)) / 2;
    cout << x << "\n";
    return (0);
}