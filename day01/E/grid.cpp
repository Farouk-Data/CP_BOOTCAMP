#include <vector>
#include <iostream>

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
                prefSum[i][j] = 0;
            else if (grid[i][j] == '.'){
                if (i == 0 || j == 0)
                    prefSum[i][j] = 1;
                else if (i != 0 && j != 0){
                    prefSum[i][j] = prefSum[i][j - 1] + prefSum[i - 1][j];
                }
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << prefSum[i][j] << " ";
        }
        std::cout << std::endl;
    }
}