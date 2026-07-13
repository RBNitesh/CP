#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll computeWin(ll a, ll b, ll c){
    ll wa = min(a, c - 1);
    ll wb = min(b, a - 1);
    ll wc = min(c, b - 1);

    ll maxWin = 0;

    if(wa > 0)
        maxWin = max(maxWin, wa + computeWin(a - wa, b, c - wa - 1));
    if(wb > 0)
        maxWin = max(maxWin, wb + computeWin(a - wb - 1, b - wb, c));
    if(wc > 0)
        maxWin = max(maxWin, wc + computeWin(a, b - wc - 1, c - wc));

    return maxWin;
}

void solve(){
    int a, b, c; // rock scissor paper
    cin >> a >> b >> c;
    cout << computeWin(a, c, b) << "\n"; // rock paper scissor
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
