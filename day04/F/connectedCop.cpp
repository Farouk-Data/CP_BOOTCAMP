#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& adjacencyMatrix, vector<bool>& visited, int currentNode) {
    visited[currentNode] = true;
    for (int neighbor = 0; neighbor < adjacencyMatrix.size(); ++neighbor) {
        if (adjacencyMatrix[currentNode][neighbor] == 1 && !visited[neighbor]) {
            dfs(adjacencyMatrix, visited, neighbor);
        }
    }
}

int countConnect(vector<vector<int>>& adjacencyMatrix) {
    int n = adjacencyMatrix.size();
    vector<bool> visited(n, false);
    int Count = 0;

    for (int node = 0; node < n; ++node) {
        if (!visited[node]) {
            dfs(adjacencyMatrix, visited, node);
            Count++;
        }
    }
    return Count;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> adjacencyMatrix(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> adjacencyMatrix[i][j];
        }
    }

    int count = countConnect(adjacencyMatrix);
    cout << count << "\n";

    return 0;
}
