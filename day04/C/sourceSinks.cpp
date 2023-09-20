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

    vector<int> sources, sinks;

    for (int i = 0; i < n; ++i) {
        bool isSource = true;
        bool isSink = true;

        for (int j = 0; j < n; ++j) {
            if (adjacencyMatrix[i][j] == 1) {
                isSink = false;
            }
            if (adjacencyMatrix[j][i] == 1) {
                isSource = false;
            }
        }

        if (isSource) {
            sources.push_back(i + 1);
        }

        if (isSink) {
            sinks.push_back(i + 1);
        }
    }
    cout << sources.size() << " ";
    for (int source : sources) {
        cout << source << " ";
    }
    cout << "\n";

    cout << sinks.size() << " ";
    for (int sink : sinks) {
        cout << sink << " ";
    }
    cout << "\n";

    return (0);
}
