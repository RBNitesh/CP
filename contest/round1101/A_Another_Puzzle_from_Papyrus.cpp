#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, c;
    cin >> n >> c;

    vector<ll> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }

    ll ans1 = 0;
    for (int i = 1; i <= n; i++){
        if(a[i] >= b[i]){
            ans1 += a[i]-b[i];
        }
        else{
            ans1 = LONG_MAX;
            break;
        }
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans2 = c;
    for (int i = 1; i <= n; i++){
        if(a[i] >= b[i]){
            ans2 += a[i]-b[i];
        }
        else{
            ans2 = LONG_MAX;
            break;
        }
    }

    ll ans = min(ans1, ans2);
    cout << ((ans == LONG_MAX)? -1 : ans) << "\n";
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