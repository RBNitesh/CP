// author: random_person247
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dfs(int u, const vector<vector<int>>& adj, ll& result) {
    ll maxDepth = 0; 
    ll secondMaxDepth = 0;

    for (int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        ll childDepth = dfs(v, adj, result);
        if (childDepth > maxDepth) {
            secondMaxDepth = maxDepth;
            maxDepth = childDepth;
        } else if (childDepth > secondMaxDepth) {
            secondMaxDepth = childDepth;
        }
    }
    result += secondMaxDepth;
    return maxDepth + 1;
}

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> adj(n + 1);
    for (int i = 2; i <= n; i++) {
        int pi;
        cin >> pi;
        adj[pi].push_back(i);
    }
    ll result = n; 
    dfs(1, adj, result);

    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}