#include<bits/stdc++.h>
using namespace std;

void solve() {
    int N, q;
    cin >> N >> q;
    
    vector<int> arr(N + 1);
    for (int i = 1; i <= N; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int u, X;
            cin >> u >> X;
            arr[u] = X;
        } 
        else {
            int L, R;
            cin >> L >> R;
            int M = R - L + 1;
            
            if (M == 1) {
                cout << arr[L] << "\n";
            } 
            else if (M % 2 == 0) {
                int k = M / 2;
                cout << max(arr[L + k - 1], arr[L + k]) << "\n";
            } 
            else {
                int k = M / 2;
                int left_pair = min(arr[L + k - 1], arr[L + k]);
                int right_pair = min(arr[L + k], arr[L + k + 1]);
                cout << max(left_pair, right_pair) << "\n";
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }
    return 0;
}