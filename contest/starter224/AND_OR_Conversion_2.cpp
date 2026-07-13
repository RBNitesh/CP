#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll M = 998244353L;

long modPow(ll x, ll n){
    if(n == 0)
        return 1l;

    long half = modPow(x, n / 2) % M;
    half = (half * half) % M;

    if(n&1)
        half = (half * x) % M;

    return half;
}

void solve(){
    int N;
    cin >> N;

    string s;
    cin >> s;

    int n = 0;
    for (int i = 0; i < N; i++){
        if(i == 0 || s[i] != s[i-1])
            n++;
    }

    long res = modPow(2, n) % M;
    cout << --res << "\n";
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