#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define LL long long
#define LD long double
#define EPS 1e-9 
using namespace std;

//root finding problems

LD equation(LD a, LD b, LD c, LD x){
    return (a*x + b*sin(x) - c);
}

int main(){
    LL in;
    LD a, b, c;
    cin >> in;
    while (in--){
        cin >> a >> b >> c;
        LD low = 0, high = c + 100, mid;
        while(high - low > EPS) {
            mid = (low + high)/2;
            if (equation(a,b,c,mid) > EPS)
                high = mid;
            else
                low = mid;
        }
        cout << mid << endl;
    }
    return (0);
}