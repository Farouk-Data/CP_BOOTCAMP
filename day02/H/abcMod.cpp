#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
#define LL long long
#define LD long double
#define MOD 998244353
using namespace std;

int main(){
    LL tmp,abc, def, diff;
    vector<LL> vec(6);
    for(LL i = 0; i < vec.size(); i++){
        cin >> vec[i];
        vec[i] %= MOD;
    }
    abc = (((vec[0] * vec[1]) % MOD) * vec[2]) % MOD;
    def = (((vec[3] * vec[4]) % MOD) * vec[5]) % MOD;
    diff = (abc - def);
    cout << diff << "\n";
    return (0);
}