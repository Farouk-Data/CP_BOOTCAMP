#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class ConnectedComponents {
private:
    int n, m;
    vector<vector<int>> adjList;
    vector<bool> visited;
    vector<int> root;
    int cc;

    void dfs(int u) {
        visited[u] = true;
        for (auto v : adjList[u]) {
            if (!visited[v]) {
                dfs(v);
            }
        }
    }

public:
    ConnectedComponents(int nodes, int edges) : n(nodes), m(edges), cc(0), adjList(n + 1), visited(n + 1, false) {}

    void addEdge(int u, int v) {
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    void findConnectedComponents() {
        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                cc++;
                root.push_back(i);
                dfs(i);
            }
        }
    }

    void printConnectedComponents() {
        cout << cc - 1 << "\n";
        if (cc > 1) {
            int u = root[0], v;
            for (int i = 1; i < cc; i++) {
                v = root[i];
                cout << u << " " << v << "\n";
                u = v;
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    ConnectedComponents cc(n, m);

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        cc.addEdge(u, v);
    }

    cc.findConnectedComponents();
    cc.printConnectedComponents();

    return 0;
}
