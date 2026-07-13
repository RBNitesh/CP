#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n, m;
    cin >> n >> m;

    int maxInterval = 0;
    int max_l = -1, max_r = -1;

    for (int i = 1; i <= m; i++){
        int l, r;
        cin >> l >> r;

        if(r-l+1 > maxInterval){
            max_l = l;
            max_r = r;
            maxInterval = r - l + 1;
        }
    }

    vector<int> vec(n + 1);
    int num = maxInterval-1;
    for (int i = max_l - 1; i > 0; i--){
        vec[i] = num+1;
        num = (num - 1 + maxInterval) % maxInterval;
    }

    num = 0;
    for (int i = max_l; i <= max_r; i++){
        vec[i] = num + 1;
        num = (num + 1) % maxInterval;
    }

    num = 0;
    for (int i = max_r + 1; i <= n; i++){
        vec[i] = num + 1;
        num = (num + 1) % maxInterval;
    }

    for (int i = 1; i <= n; i++){
        if(i > 1)
            cout << " ";
        cout << vec[i];
    }
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t-- > 0){
        solve();
    }
}
