#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int cnt0 = 0, cnt1 = 0;

        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(a == 0)
                cnt0++;
            else if(a == 1)
                cnt1++;
        }

        long long res = cnt1 * ((long long) 1 * 1 << cnt0);
        cout << res << "\n";
    }
    return 0;
}