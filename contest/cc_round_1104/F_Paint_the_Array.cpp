#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll INF = LONG_MAX;

void solve(){
    
    ll n, m;
    cin >> n >> m;

    vector<ll> arr(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    vector<ll> prev(m + 1, INF);
    ll prev_min = 0;

    for (int i = 1; i <= n; i++){
        vector<ll> curr(m + 1, INF);

        for (int j = 1; j <= m; j++){
            if(j == 1){
                curr[j] = min(curr[j], prev_min + (arr[i] != 1));
            }
            else{
                if(prev[j-1] != INF){
                    curr[j] = min(curr[j], min(prev[j - 1], prev[m]) + (arr[i] != j));
                }
            }
        }

        prev = curr;

        prev_min = INF;
        for (int k = 1; k <= m; k++){
            prev_min = min(prev_min, prev[k]);
        }
    }

    cout << prev[m] << "\n";
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