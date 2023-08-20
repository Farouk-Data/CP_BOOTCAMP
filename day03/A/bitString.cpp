#include <bits/stdc++.h>
#include <vector>
#define LL long long
#define MOD 1000000007
using namespace std;

LL expo(LL a, LL b){
    LL res = 1;
    while (b > 0){
        if (b % 2 == 1)
            res = ((a % MOD) * (res % MOD)) % MOD;
        a = ((a % MOD) * (a % MOD)) % MOD;
        b = (b / 2);
    }
    return (res % MOD);
}


int main(){
    LL in;
    cin >> in;
    cout << expo(2,in) << "\n";
    return (0);
}