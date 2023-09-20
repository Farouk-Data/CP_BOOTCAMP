#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

class RoomAnalyzer {
private:
    int n, m, rooms;
    vector<vector<bool>> visited;
    vector<pair<int, int>> moves = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool isValid(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y]);
    }

    void dfs(int i, int j) {
        visited[i][j] = true;
        for (auto [dx, dy] : moves) {
            int x = i + dx, y = j + dy;
            if (isValid(x, y)) {
                dfs(x, y);
            }
        }
    }

public:
    RoomAnalyzer(int rows, int cols) : n(rows), m(cols), rooms(0), visited(n, vector<bool>(m, false)) {}

    void processInput() {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char c;
                cin >> c;
                visited[i][j] = (c == '#');
            }
        }
    }

    int findConnectedComponents() {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (!visited[i][j]) {
                    dfs(i, j);
                    rooms++;
                }
            }
        }
        return (rooms);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    RoomAnalyzer analyzer(n, m);
    analyzer.processInput();

    cout << analyzer.findConnectedComponents() << "\n";
}
