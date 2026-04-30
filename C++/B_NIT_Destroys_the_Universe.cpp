#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++){
            int ele;
            cin >> ele;
            a[i] = ele;
        }

        int ans = 0;
        for (int i = 0; i < n; i++){
            if(a[i] != 0 && (i == 0 || a[i-1] == 0))
                ans++;
            if(ans > 1)
                break;
        }
        cout << ans << "\n";
    }
}