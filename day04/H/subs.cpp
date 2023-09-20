#include <iostream>
#include <vector>
using namespace std;

#define LL long long
const LL MAX = 10000000;

LL calculateSubtreeSize(LL node, const vector<vector<LL>>& adj, vector<LL>& subtree_size) {
    if (adj[node].empty())
        return (1);
    else {
        for (LL child : adj[node])
            subtree_size[node] += calculateSubtreeSize(child, adj, subtree_size);
    }
    return (subtree_size[node] + 1);
}

int main() {
    LL n;
    cin >> n;

    vector<vector<LL>> adj(MAX);
    vector<LL> subtree_size(MAX, 0);

    for (LL i = 2; i <= n; i++) {
        LL parent;
        cin >> parent;
        adj[parent].emplace_back(i);
    }

    calculateSubtreeSize(1, adj, subtree_size);

    for (LL i = 1; i <= n; i++) {
        cout << subtree_size[i] << " ";
    }

    return 0;
}
