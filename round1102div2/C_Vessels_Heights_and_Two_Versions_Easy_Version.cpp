#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<ll> h(n);
        for (int i = 0; i < n; i++){
            cin >> h[i];
        }

        vector<ll> ans(n, 0);
        for (int i = 0; i < n; i++){

            vector<ll> fill_h(n);
            ll leftMax = 0;
            for (int j = (i + 1)%n; j != i; j = (j + 1) % n){
                leftMax = max(leftMax, h[(j-1+n)%n]);
                fill_h[j] = leftMax;
            }

            ll rightMax = 0;
            for (int j = (i - 1 + n) % n; j != i; j = (j - 1 + n) % n){
                rightMax = max(rightMax, h[j]);
                fill_h[j] = min(fill_h[j], rightMax);
                ans[i] += fill_h[j];
            }
        }

        for (int i = 0; i < n; i++){
            if(i > 0)
                cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }
}