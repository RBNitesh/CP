#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        ll n, k, b, s;

        cin >> n >> k >> b >> s;

        ll rem = s - b * k;
        ll extraForEachEle = (rem + n - 1) / n;

        if(rem < 0 || extraForEachEle >= k){
            cout << -1 << "\n";
        }
        else{
            for (int i = 0; i < n; i++){
                ll ele = b/n * k;
                if(i < b%n)
                    ele += 1*k;
                if(rem > 0){
                    ele += min(rem, extraForEachEle);
                    rem -= min(rem, extraForEachEle);
                }

                cout << ele << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}