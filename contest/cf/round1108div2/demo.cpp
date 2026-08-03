#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll M = 1e9 + 7;

ll findPow(ll base, ll pow) {
    ll result = 1;
    base %= M;
    while(pow > 0) {
        if (pow % 2 == 1) result = (result * base) % M;
        base = (base * base) % M;
        pow /= 2;
    }
    return result;
}

ll compute(ll c, int a, int b, int sz){
    ll val = findPow(2, c - 1);
    ll even = c > 0 ? val : 1;
    ll odd = c > 0  ? val : 0;
    ll ways = findPow(2, sz - a);
    return even * ways % M * odd * b % M * ways % M;
}

void solve() {
    int n;
    cin >> n;
    
    int c = 0; 
    vector<int> arr;
    arr.reserve(n);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) 
            c++; 
        else 
            arr.push_back(x);
    }

    int sz = arr.size(), a = 0, b = 0; 

    if (sz > 0) {
        a = 1; 
        for (int i = 1; i < sz; i++) {
            if (arr[i] != arr[i - 1]) {
                a++;
                if (arr[i] == arr[i - 1] + 1) 
                    b++;
            }
        }
    }
    cout << compute(c, a, b, sz) << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}