#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;
vector<int> g[N];
bool vis[N];

void dfs(int u) {
    vis[u] = true;
    for (int v : g[u]) {
        if (!vis[v]) dfs(v);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    if (m != n) {
        cout << "No\n";
        return;
    }

    vector<int> degree(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }

    // 检查每个点的度数为 2
    for (int i = 1; i <= n; i++) {
        if (degree[i] != 2) {
            cout << "No\n";
            return;
        }
    }

    // 检查连通性
    dfs(1);
    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    int T = 1;
    while (T--) {
        solve();
    }
    return 0;
}
