#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;

    if(a > b*2/3)
        cout << "Yes" << "\n";
    else
        cout << "No" << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}