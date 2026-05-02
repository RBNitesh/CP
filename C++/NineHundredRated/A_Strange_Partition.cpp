#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n, x;
        cin >> n >> x;

        int carry = 0;
        ll mini = 0;
        ll maxi = 0;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;

            maxi += (a+x-1)/ x;

            mini += (a + carry) / x;
            carry = (a + carry) % x;
        }
        if(carry > 0)
            mini++;

        cout << mini << " " << maxi << "\n";
    }
    return 0;
}