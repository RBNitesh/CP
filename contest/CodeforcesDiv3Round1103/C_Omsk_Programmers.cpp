#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void bfs(ll a, ll b, ll x){
    map<pair<ll,ll>, ll> d;
    priority_queue<pair<ll, pair<ll,ll>>, vector<pair<ll,pair<ll,ll>>>, greater<pair<ll, pair<ll,ll>>>> q;

    q.push({0, {a, b}});
    d[{a, b}] = 0;

    ll ans = 0;
    while(!q.empty()){
        auto curr = q.top();
        q.pop();

        ll step = curr.first;
        a = curr.second.first;
        b = curr.second.second;

        // cout << step << " " << a << " " << b << "\n";

        if(a == b){
            cout << step << "\n";
            return;
        }

        if(d[{a, b}] < step)
            continue;

        if(d.find({a+1, b}) == d.end() || d[{a+1, b}] > step+1){
            // cout << "first" << "\n";
            q.push({step+1,{a + 1, b}});
            d[{a + 1, b}] = step + 1;
        }
        if(d.find({a, b+1}) == d.end() || d[{a, b+1}] > step+1){
            // cout << "second" << "\n";
            q.push({step+1,{a, b+1}});
            d[{a, b + 1}] = step + 1;
        }
        if(d.find({a/x, b}) == d.end() || d[{a/x, b}] > step+1){
            // cout << "third" << "\n";
            // cout << step + 1 << " " << a/x << " " << b << "\n";
            q.push({step+1,{a/x, b}});
            d[{a / x, b}] = step + 1;
        }
        if(d.find({a, b/x}) == d.end() || d[{a, b/x}] > step+1){
            // cout << "fourth" << "\n";
            // cout << step + 1 << " " << a << " " << b / x << "\n";
            q.push({step+1,{a, b/x}});
            d[{a, b / x}] = step + 1;
        }
    }
}

void solve(){
    ll a, b, x;
    cin >> a >> b >> x;

    bfs(a, b, x);
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