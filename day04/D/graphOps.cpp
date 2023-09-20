#include <bits/stdc++.h>
#include <iostream>
#include <vector>
# define LL long long

using namespace std;

int main() {
    LL n, q;
    cin >> n;

    vector<vector<LL>> adj(n + 1);
    cin >> q;
    while (q--){
        LL op, u, v;
        cin >> op;
        if (op == 1){
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        else if (op == 2){
            cin >> u;
            for (LL i = 0; i < adj[u].size(); i++){
                cout << adj[u][i] << " ";
            }
            cout << "\n";
        }
    }
    
    return (0);
}

