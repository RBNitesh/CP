#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        ll a, b;
        cin >> a >> b;

        if(a == b){
            cout << 0 << " " << 0 << "\n";
        }

        else{
            ll diff = abs(a - b);
            ll steps = min(a % diff, diff - a % diff);

            cout << diff << " " << steps << "\n";
        } 
    }
    return 0;
}