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

        vector<int> b(n);
        for (int i = 1; i <= n; i++){
            cin >> b[i-1];
        }

        sort(b.rbegin(), b.rend());

        bool flag = true;
        for (int i = 2; i < n; i++){
            if(b[i-2] % b[i-1] != b[i]){
                flag = false;
                break;
            }
        }

        if(flag)
            cout << b[0] << " " << b[1] << "\n";
        else
            cout << -1 << "\n";
    }
}