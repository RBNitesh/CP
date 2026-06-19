#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    ll mini = LONG_MAX;
    ll sum = 0;

    for (int i = 1; i <= n; i++){
        ll a;
        cin >> a;

        mini = min(mini, a);

        sum += mini;
    }
    cout << sum << "\n";
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