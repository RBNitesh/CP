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

        string s;
        cin >> s;

        vector<int> foo(k, 0);
        for (int i = 0; i < n; i++){
            if(s[i] == '1'){
                foo[i % k]++;
            }
        }

        string ans = "YES";
        for (int i = 0; i < k; i++){
            if(foo[i] % 2 != 0){
                ans = "NO";
                break;
            }
        }
        cout << ans << "\n";
    }
}