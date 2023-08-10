#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    char c;
    cin >> n;
    std::vector<std::vector<char> > grid(n, std::vector<char>(n));
    std::vector<std::vector<long long> > prefSum(n, std::vector<long long>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> c;
            grid[i][j] = c;
            if (grid[i][j] == '*')
                prefSum[i][j] = 0 % ((long long)pow(10,9) + 7) ;
            else if (grid[i][j] == '.'){
                if (i == 0 || j == 0)
                    prefSum[i][j] = 1 % ((long long)pow(10,9) + 7);
                else if (i != 0 && j != 0){
                    prefSum[i][j] = (prefSum[i][j - 1] % ((long long)pow(10,9) + 7)) 
                    + (prefSum[i - 1][j] % ((long long)pow(10,9) + 7));
                }
            }
        }
    }
    cout << prefSum[n - 1][n - 1] << "\n";
    return (0);
}