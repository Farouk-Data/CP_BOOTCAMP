#include <iostream>
#define MOD 1000000007
#define LL long long 
using namespace std;

LL expo(LL a, LL b){
    LL res = 1;
    while ((b % MOD) > 0){
        if ((b % MOD) % 2 == 1)
            res = ((a % MOD) * (res % MOD)) % MOD;
        a = (a % MOD) * (a % MOD);
        b = ((b % MOD) / 2);
    }
    return (res % MOD);
}

int main(){
    LL days;
    cin >> days;
    cout << expo(3, days) << "\n";
}