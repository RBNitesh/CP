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

/*
// Brute-force
ll compute(int st, vector<ll>& arr, int n){
    ll next = 1;
    ll ans = 0;
    for (int i = st; i <= n; ++i)
    {
        if(arr[i] == next){
            next++;
        }
        ans += next - 1;
    }
    return ans;
}
*/

void solve(){
    int n;
    cin >> n;

    vl arr(n+1);
    for (int i = 1; i <= n; ++i){
        cin >> arr[i];
    }

    ll ans = 0;
    ll last = 0;
    for (int i = n; i >= 1; i--)
    {
        if(arr[i] == 1){
            // ll cur = compute(i, arr, n);
            // // cout << i << " " << cur << "\n";
            // last = cur;
        }
        ans += last;
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}
