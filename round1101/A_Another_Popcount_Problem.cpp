#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n, k;
    cin >> n >> k;

    int ans = 0;
    int bit = 0;
    ll x = 0;
    while(k > 0){
        while((x*2+1)*k <= n){
            x = (x << 1) + 1;
            bit++;
        }
        n -= x;
        ans += bit;
        k--;
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