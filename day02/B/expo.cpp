#include <vector>
#include <iostream>
#define MOD 1000000007
#define LL long long 
using namespace std;

LL expo(LL a, LL b){
    LL res = 1, tmp = 1;
    if (b == 0)
        return (1);
    tmp = expo(a % MOD, ((b % MOD) / 2) % MOD);
    res = ((tmp % MOD) * (tmp % MOD)) % MOD;
    if (b % 2 == 1)
        res = ((a % MOD) * (res % MOD)) % MOD;
    return (res);
}

int main(){
    LL q, a, b;

    cin >> q;
    while (q--){
        cin >> a >> b;
        cout << expo(a, b) << "\n";
    }
}