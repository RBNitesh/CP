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
    string s;

    cin >> n >> s;

    vector<int> freq(26, 0);

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if(i == 0 || s[i] != s[i-1]){
            ans++;
        }
    }

    int sub = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if(s[i] != s[i-1] && s[i] != s[i+1]){
            if(s[i-1] == s[i+1]){
                sub = max(sub, 2);
            }
            else
                sub = max(sub, 1);
        }

        if(sub == 2)
            break;
    }

    ans -= sub;

    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
