#include <bits/stdc++.h>
#include <iostream>
#include <vector>
# define LL long long

using namespace std;

bool isConnected(vector<vector<LL>>& adjacencyMatrix, vector<bool>& visited, LL currentNode) {
    visited[currentNode] = true;
    for (LL neighbor = 0; neighbor < adjacencyMatrix.size(); ++neighbor) {
        if (adjacencyMatrix[currentNode][neighbor] == 1 && !visited[neighbor]) {
            isConnected(adjacencyMatrix, visited, neighbor);
        }
    }
    return true;
}

bool isGraphConnected(vector<vector<LL>>& adjacencyMatrix) {
    LL n = adjacencyMatrix.size();
    vector<bool> visited(n, false);

    isConnected(adjacencyMatrix, visited, 0);

    for (bool isVisited : visited) {
        if (!isVisited) {
            return false;  
        }
    }
    return true;
}

int main() {
    LL n, edgeCount = 0;
    cin >> n;
    vector<vector<LL>> adjacencyMatrix(n, vector<LL>(n, 0));
    for (LL i = 0; i < n; ++i) {
        for (LL j = 0; j < n; ++j) {
            cin >> adjacencyMatrix[i][j];
        }
    }
    
    for (LL i = 0; i < n; ++i) {
        for (LL j = i + 1; j < n; ++j) {
            if (adjacencyMatrix[i][j] == 1) {
                edgeCount++;
            }
        }
    }
    vector<bool> visited(n, false);
    if (isGraphConnected(adjacencyMatrix) && edgeCount == n - 1)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
     
    return (0);
}
