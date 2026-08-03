#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;

    if(n == 2)
        cout << "-1" << "\n";

    else{
        cout << 1 << " ";

        if(n == 1){
            cout << "\n";
            return;
        }

        cout << 2 << " ";

        ll x = 3;
        while(n-- > 2){
            cout << x << " ";
            x *= 2;
        }
        cout << "\n";
    }
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