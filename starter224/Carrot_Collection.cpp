#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N, L, R;
    cin >> N >> L >> R;

    int ans = 0;
    int sum = 0;
    for (int i = 1; i <= N; i++){
        int x;
        cin >> x;
        if(i < L || i > R){
            sum += x;
        }
        else
            sum = 0;

        ans = max(ans, sum);
    }
    cout << ans << "\n";
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