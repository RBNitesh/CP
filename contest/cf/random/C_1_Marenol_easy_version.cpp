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

    string s1, s2;
    cin >> s1 >> s2;

    vector<int> f1(4), f2(4);

    int c11 = 0, c21 = 0;
    for (int i = 0; i < n; ++i)
    {
        int pos = i & 1;
        int ele1 = s1[i] == '1';
        int ele2 = s2[i] == '1';

        c11 += s1[i] == '1';
        c21 += s2[i] == '1';

        f1[pos * 2 + ele1]++;
        f2[pos * 2 + ele2]++;
    }

    if(c11 != c21){
        cout << "NO" << "\n";
        return;
    }

    for (int i = 0; i < 4; ++i){
        if(f1[i] != f2[i]){
            cout << "NO" << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
    return;
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
