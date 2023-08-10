#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long fib[n + 2];
    fib[0] = 1;
    fib[1] = 1;
    for (long long i = 2; i <= n; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    cout << fib[n] << "\n";
}