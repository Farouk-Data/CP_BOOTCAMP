#include <vector>
#include <iostream>
#define mod 1000000007
using namespace std;

int main(){
    long long n;
    char c;
    cin >> n;
    vector<vector<long long> > prefSum(n, vector<long long>(n, 0));
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            cin >> c;
            if (c == '*')
                prefSum[i][j] = 0;
            else if (c == '.'){
                if (i == 0 && j == 0)
                    prefSum[i][j] = 1;
                else if (i != 0 || j != 0){
                    if (i == 0)
                        prefSum[i][j] = (prefSum[i][j - 1] % mod) ;
                    else if (j == 0)
                        prefSum[i][j] =  (prefSum[i - 1][j] % mod);
                    else
                        prefSum[i][j] = ((prefSum[i][j - 1] % mod) 
                            + (prefSum[i - 1][j] % mod))%mod;
                }
            }
        }
    }
    cout << prefSum[n - 1][n - 1] << "\n";
    return (0);
}