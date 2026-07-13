#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        vector<int> ans(n + 1, 0);
        while(k > 0){
            for (int i = 1; i <= n; i++){
                if(k == 0)
                    break;
                ans[i] += k;
                k--;
            }
            for (int i = n; i >= 1; i--){
                if(k == 0)
                    break;
                ans[i] += k;
                k--;
            }
        }

        int maxi = 0;
        for(auto &it : ans){
            maxi = max(maxi, it);
        }
        cout << maxi << "\n";
    }
}