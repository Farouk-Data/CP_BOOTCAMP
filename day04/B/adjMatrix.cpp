#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> adjacencyMatrix(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adjacencyMatrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (adjacencyMatrix[i][j] == 1) 
                cout << i + 1 << " " << j + 1 << "\n";
        }
    }
    return (0);
}
