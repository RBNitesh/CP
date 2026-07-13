#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M = 998244353;
vector<ll> fact;

ll exp(int x, ll n){
    if(n == 0)
        return (ll)1;

    ll half = exp(x, n / 2) % M;
    half = (half * half) % M;

    if(n % 2 != 0){
        half = (half * x) % M;
    }

    return half;
}

int main(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int N = x1 + x2 + x3;

    fact.resize(N + 1);
    fact[0] = 1;
    fact[1] = 1;

    for (int i = 2; i <= N; i++){
        fact[i] = (fact[i - 1] * i) % M;
    }

    ll ans = 0;

    for (int i = 1; i <= min(x1, x2+1); i++){ // we will atleast one slot for x3
        ll localAns = fact[x2 + 1] * exp(fact[i], M - 2) % M;

        // cout << "outer loop" << "\n";

        for (int j = 1; j <= min(x3, x2 + 1 - i); j++){
            ll finalLocalAns = localAns * exp(fact[j], M - 2) % M;
            finalLocalAns = finalLocalAns * exp(fact[x2 + 1 - i - j], M - 2) % M;

            ans = (ans + finalLocalAns) % M;

            // cout << "inner loop" << "\n";
        }
    }
    cout << ans << "\n";
}