#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<int> vec;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            vec.push_back(a);
        }

        int ans = 0;
        int maxi = 0, mini = 1000;
        for (int i = 0; i < n; i++){
            ans = max({ans, vec[i] - vec[(i + 1) % n]});
            if(i > 0){
                maxi = max({maxi, vec[i]});
            }
            if(i < n-1){
                mini = min({mini, vec[i]});
            }
        }

        if(n > 1){
            ans = max({ans, maxi - vec[0], vec[n - 1] - mini});
        }
        
        cout << ans << "\n";
    }
    return 0;
}