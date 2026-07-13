#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin >> n;

    ll prev = 0;
    for (int i = 1; i <= n; i++){
        ll curr;
        cin >> curr;

        if(prev > curr){
            curr += prev;
        }

        prev = curr;
    }
    cout << prev << "\n";
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