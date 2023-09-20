#include <bits/stdc++.h>
#include <string>
#include <map>
#define LL long long
#define MOD 1000000007
using namespace std;

vector<LL> preFact;

LL fact(LL n) {

    if (preFact.size() >= n + 1)
        return preFact[n];
    LL i = 0;
    for (i = preFact.size(); i <= n; i++) {
        preFact.push_back(preFact[i-1] * i);
        preFact[i] %= MOD;
    }
    for (LL j = 0 ; j < preFact.size();j++)
        preFact[j] %= MOD;
    return preFact[i-1];
}


LL expo(LL a, LL b){
    LL res = 1;
    while (b > 0){
        if (b % 2 == 1)
            res = ((a % MOD) * (res % MOD)) % MOD;
        a = (a % MOD) * (a % MOD);
        b = ((b % MOD) / 2);
    }
    return (res);
}


int main() {
    LL n,a,b,total;
    cin >> n;
    
    preFact.push_back(1);
    while(n--){
        cin >> a >> b;
        total = (fact(a) * expo(fact(b) * fact(a - b), MOD - 2)) % MOD;
        cout << total << "\n";
        }
    
    return (0);
}