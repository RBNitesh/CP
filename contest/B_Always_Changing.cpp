#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>

using namespace std;
// using namespace __gnu_pbds;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;

using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pii>;
using vpl = vector<pll>;

constexpr int INF = 1e9;
constexpr ll LINF = 4e18;
constexpr int MOD = 1'000'000'007;

template<class T>
bool chmin(T &a, const T &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
bool chmax(T &a, const T &b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

// template<class K, class V>
// using hash_map = gp_hash_table<K, V>;

ll gcd(ll a, ll b) {return a == 0 ? b : gcd(b % a, a);}

void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> suff0(n + 1), suff1(n+1);
    int c0 = 0, c1 = 0;
    for (int i = n; i >= 0; --i)
    {
        suff0[i] = c0;
        suff1[i] = c1;

        if(s[i] == '0')
            c0++;
        else
            c1++;
    }

    int ans = n + 1;

    int parity = 0;
    int del0 = 0, del1 = 0;
    for (int i = 0; i < n; ++i)
    {
        int ch = s[i] - '0';

        if (ch != parity){
            if(ch == 0)
                del0++;
            else
                del1++;
        }

        else
            parity ^= 1;

        if (abs(del0 + suff0[i+1] - del1 - suff1[i+1]) <= 1)
        {
            ans = min(ans, del0 + suff0[i+1] + del1 + suff1[i+1]);
        }
    }

    del0 = 0;
    del1 = 0;
    parity = 1;
    for (int i = 0; i < n; ++i)
    {
        int ch = s[i] - '0';

        if (ch != parity){
            if(ch == 0)
                del0++;
            else
                del1++;
        }

        else
            parity ^= 1;


        if (abs(del0 + suff0[i+1] - del1 - suff1[i+1]) <= 1)
        {
            ans = min(ans, del0 + suff0[i+1] + del1 + suff1[i+1]);
        }
    }

    if(ans <= n){
        cout << ans << "\n";
    }
    else{
        cout << -1 << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }

    return 0;
}
