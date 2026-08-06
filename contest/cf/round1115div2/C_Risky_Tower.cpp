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
    int n, m;
    cin >> n >> m;

    vector<ll> v(n + 1);
    for (int i = 1; i <= n; ++i){
        cin >> v[i];
    }

    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            cin >> a[i][j];
        }
    }

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll currSum = 0;
    int ans = m;
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= m; ++j){
            pq.push(a[i][j]);
            currSum += a[i][j];
        }

        while(!pq.empty() && currSum >= v[i]){
            currSum -= pq.top();
            chmin(ans, (int)pq.size());
            pq.pop();
        }
    }
    cout << ans << "\n";
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
