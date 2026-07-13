#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int ans = (1 << 31) - 1;

        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            ans &= a;
        }
        cout << ans << "\n";
    }
    return 0;
}