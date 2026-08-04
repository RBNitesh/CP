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

    vl b(n);
    for (int i = 0; i < n; ++i){
        cin >> b[i];
    }

    sort(begin(b), end(b));

    ll last = 0;
    vl a(n);

    int gc = 0;
    ll cnt = 0;

    for (int i = 0; i < n; ++i){
        if(i == 0 || b[i] == b[i-1]){
            cnt++;
        }
        else{
            ll diff = b[i] - b[i - 1];
            ll ele = diff / cnt;

            while(cnt--){
                int idx = 
                a[] = ele;
                gc++;
            }

            last = ele;
            cnt = 1;
        }
    }

    while(idx < n){
        cout << last << " ";
        idx++;
    }

    cout << "\n";
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
