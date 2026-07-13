#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n + 1);
    vector<ll> b(n + 1);

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    ll ans = 0;
    for (int i = 1; i <= n; i++){
        if(a[i] <= b[i])
            continue;

        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] <= b[i])
            {
                for (int k = j - 1; k >= i; k--)
                {
                    swap(a[k], a[k + 1]);
                    ans++;
                }
                break;
            }
        }

        if(a[i] > b[i]){
            cout << -1 << "\n";
            return;
        }
    }
    cout << ans << "\n";
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