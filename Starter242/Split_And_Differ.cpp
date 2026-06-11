#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void print(vector<int> &a, int n){
    int prev = -1;

    int size = 0;
    for (int i = 1; i <= n; i++){
        if(a[i] != prev){
            if(size > 0)
                cout << " ";

            cout << a[i];

            size++;
            prev = a[i];
        }
        else{
            if(size > 0)
                cout << " ";

            if(a[i] == 2){
                cout << 1 << " " << 1;
                size += 2;
            }
            if(a[i+1] == 1){
                cout << a[i] - 1 << " " << 1;
                size += 2;
            }
            else{
                
            }
        }
    }
}

void solve(){
    int n;
    cin >> n;

    vector<int> a(n + 2);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++){
        if(a[i] == 1){
            if(a[i-1] == 1){
                cout << -1 << "\n";
                return;
            }
        }
    }

    int j = 1;
    int l = -1, r = -1;
    while(j <= n){
        if(a[j] != 2){
            j++;
            continue;
        }

        l = j;
        while(j+1 <= n && a[j+1] == 2)
            j++;
        r = j;

        if(l < j && a[l-1] == 1 || a[j+1] == 1){
            cout << -1 << "\n";
            return;
        }
    }

    print(a, n);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        solve();
    }
}