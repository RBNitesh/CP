/*
    Link: codeforces.com/blog/entry/154603
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    string s;

    cin >> n >> s;

    vector<ll> cnt(3);
    cnt[0] = 1;
    ll x = 0;
    char prev = s[0];
    ll y = 0;
    ll ans = 0;

    for (int i = 0; i < n; i++){
        x += (s[i] == '1') ? 1 : -1;
        x = ((x % 3) + 3) % 3;

        y = (s[i] != prev) ? y + 1 : 1;
        prev = s[i];

        ans += (cnt[0] + cnt[1] + cnt[2] - cnt[x]);
        ans -= (y - 1)/2;

        cnt[x]++;
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