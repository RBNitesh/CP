#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        ll n;
        cin >> n;

        if(n == 2 || n % 2 != 0){
            cout << -1 << "\n";
            continue;
        }

        ll maxi = n / 4;
        ll mini = n / 6 + (n % 6 != 0);

        cout << mini << " " << maxi << "\n";
    }
    return 0;
}