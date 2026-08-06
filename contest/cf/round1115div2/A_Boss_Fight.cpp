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

ll gcd(ll a, ll b) { return a == 0 ? b : gcd(b % a, a); }

ll freq[1001];
ll prefixSum[1001];
void solve()
{
    int n;
    cin >> n;

    memset(freq, 0, 10001);

    ll maxFreqEle = 0;

    vl arr(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        freq[arr[i]]++;

        if(freq[arr[i]] > freq[maxFreqEle]){
            maxFreqEle = arr[i];
        }
    }

    ll sum = 0;
    for (int i = 1; i <= 1000; ++i)
    {
        if(i != maxFreqEle){
            sum += freq[i] * i;
        }
        else{
            sum += min(n - freq[i] + 2, freq[i]) * i;
        }
    }

    cout << sum << "\n";
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
