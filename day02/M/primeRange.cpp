#include <bits/stdc++.h>
#include <vector>
#define LL long long
using namespace std;

bool isPrime(LL n){

    for(LL i=2; i*i<=n; i++){
	    if(n%i == 0)
            return (false);
}
    return (true);
}

int main()
{
	LL m,n;
    vector<LL> primes;
    cin >> m >> n;

	for(LL i=m; i<=n; i++){
	    if(isPrime(i)){
		    cout << i << "\n";
            primes.push_back(i);
        }
	}
    if (primes.size() == 0)
        cout << "Absent" << "\n";

	return 0;
}
