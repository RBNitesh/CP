#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    // if only case n can not have odd divisior if it is of the form 2^k.
    // it means, if n has only one set bit. Otherwise, n must have atleast one odd divisior.
    while(t-- > 0){
        ll n;
        cin >> n;

        if((n & (n-1)) != 0){
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
    return 0;
}