#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int i = 0;
        while(i < n && i < m){
            if(a[i] == b[i]){
                i++;
            }
            else
                break;
        }
        cout << a.substr(0, i) << "\n";
    }
}