#include <bits/stdc++.h>
#include <string>
#include <map>
#define LL long long
#define MOD 1000000007
using namespace std;

//Permutations with Repetition

LL fact(LL n) {
    LL result = 1;
    for (LL i = 1; i <= n; i++)
        result = (result * i) % MOD;
    return (result);
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
    string in;
    LL total;
    map<char, int> charCount;
    cin >> in;
    
    
    for (char c : in)
        charCount[c]++;
    LL factFreq = 1;
    for (const auto& pair : charCount)
        factFreq = (factFreq * fact(pair.second)) % MOD;
    total = (fact(in.size()) * expo(factFreq, MOD - 2)) % MOD;
    cout << total << "\n";
    return (0);
}