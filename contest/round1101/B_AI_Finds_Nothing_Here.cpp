#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll M = 998244353L;

ll exp(ll a, ll pow){
    if(pow == 0)
        return 1;

    ll half = exp(a, pow / 2) % M;
    half = (half * half) % M;

    if(pow & 1){
        half = (half * a) % M;
    }
    return half;
}

void solve(){
    ll n, m, r, c;
    cin >> n >> m >> r >> c;

    ll total = n * m;

    ll cnt = ((n - r + 1) * (m - c + 1));
    ll ans = exp(2, (total - cnt) % (M-1));

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