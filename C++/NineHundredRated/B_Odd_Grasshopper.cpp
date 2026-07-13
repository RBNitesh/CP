#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        ll x, n;

        cin >> x >> n;

        if(n == 0){
            cout << x << "\n";
        }
        else{
            n -= 1;

            ll positiveDir = 1 + n - (n % 4);
            ll lastPoint = positiveDir;

            for (int mod = n % 4; mod > 0; mod--){
                if(mod == 3){
                    positiveDir += lastPoint + mod;
                }
                else
                    positiveDir -= lastPoint+mod;
            }

            if(x % 2 == 0)
                cout << x - positiveDir << "\n";
            else
                cout << x + positiveDir << "\n";
        }
    }
    return 0;
}