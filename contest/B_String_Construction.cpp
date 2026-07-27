#include<bits/stdc++.h>
using namespace std;
using ll = long long;

using vi = vector<int>;
using vl = vector<ll>;
using vpi = vector<pair<int, int>>;
using vpl = vector<pair<ll, ll>>;
using vvi = vector<vector<int>>;
using vvl = vector<vector<ll>>;
using vvpi = vector<vector<pair<int, int>>>;
using vvpl = vector<vector<pair<ll, ll>>>;

ll M = 1e9 + 7;
ll INF1 = INT_MAX;
ll INF2 = LLONG_MAX;

#define f(i, a, b) for (int i = a; i <= b; ++i)
#define F(j, a, b, k) for (int i = a; i <= b; i += k)

#define si(x) scanf("%d", &x);
#define push push_back()
#define pop pop_back()
#define all(arr) arr.begin(), arr.end()

#define debug(x) cout << #x << x;

ll gcd(ll a, ll b) {return a == 0 ? b : gcd(b % a, a);} 

void solve(){
    int n, k;
    si(n);
    si(k);

    if(n-k <= 1)
        cout << -1 << "\n";
    else{
        int half = k / 2;
        // cout << k << " " << half << "\n";
        for (int i = 1; i <= half+1; ++i){
            cout << 0;
        }
        for (int i = 1; i <= k - half + 1; ++i){
            cout << 1;
        }
        for (int i = 1; k + 2 + i <= n; ++i)
        {
            if(i&1)
                cout << 0;
            else
                cout << 1;
        }
        cout << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    si(t);

    while(t-- > 0){
        solve();
    }
}
