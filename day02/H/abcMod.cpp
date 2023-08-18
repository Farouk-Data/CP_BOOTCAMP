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
    //This addition of MOD ensures that the result will be a positive integer, even if abc - def is negative
    //The entire result of (abc - def + MOD) is then taken modulo MOD. This step ensures that the final result remains within the range of 0 to MOD - 1, effectively calculating the remainder
    diff = (abc - def) % MOD;
    cout << diff << "\n";
    return (0);
}