#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int i, int j, const string &s1, const string &s2, int n, ll &ans){
    if(j-i <= 1) return;
    
    int mid = (i + j) >> 1;

    string n_mid = "";
    int sb = 0;

    for (int idx = 0; idx < n; idx++){
        n_mid += (s1[idx] != s2[idx]) ? "1" : "0";
        sb += (n_mid[idx] == '1');
    }

    ans += (ll)sb * (n - sb);

    solve(i, mid, s1, n_mid, n, ans);
    solve(mid, j, n_mid, s2, n, ans);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        string s1, s2;
        cin >> s1 >> s2;

        ll ans = 0;
        int sb1 = 0, sb2 = 0;
        for (int i = 0; i < n; i++){
            if(s1[i] == '1')
                sb1++;
            if(s2[i] == '1')
                sb2++;
        }
        ans += (ll)sb1 * (n - sb1);
        ans += (ll)sb2 * (n - sb2);

        solve(1, (1 << k) + 1, s1, s2, n, ans);

        cout << ans << "\n";
    }
}