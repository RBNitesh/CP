#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;

    int n = s.length();
    ll ans = 0;

    for (int i = 0; i < n; i++){
        if(s[i] == 'C'){
            ans += min(i + 1, n - i);
        }
    }
    cout << ans << "\n";
}