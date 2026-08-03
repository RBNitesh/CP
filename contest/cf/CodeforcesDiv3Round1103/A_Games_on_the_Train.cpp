#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int mn = INT_MAX;
        int mx = INT_MIN;

        for (int i = 1; i <= n; i++){
            int h;
            cin >> h;

            mn = min(mn, h);
            mx = max(mx, h);
        }

        cout << mx + 1 - mn << "\n";
    }
}