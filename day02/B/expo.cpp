#include <vector>
#include <iostream>
#define mod 1000000007
using namespace std;

long long expo(long long a, long long b){
    if (b == 0)
        return (1);
    else if (b % 2 == 0)
        return (expo(expo(a,2), (b/2)));
    return (expo(expo(a,2), (b - 1/2)));
}

int main(){
    long long q, a, b;

    cin >> q;
    while (q--){
        cin >> a >> b;
        cout << expo(a, b) << "\n";
    }
}