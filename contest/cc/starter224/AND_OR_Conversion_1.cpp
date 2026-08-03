#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;

    string s1, s2;
    cin >> s1 >> s2;

    int i = 0;
    for (int j = 0; j < N; j++){
        while(i < N && s2[i] == s1[j])
            i++;

        if(i == N)
            break;
    }

    if(i == N){
        cout << "Yes" << "\n";
        return;
    }

    i = N - 1;
    for (int j = N - 1; j >= 0; j--){
        while(i >= 0 && s2[i] == s1[j])
            i--;

        if(i == -1)
            break;
    }

    if(i == -1){
        cout << "Yes" << "\n";
        return;
    } 

    cout << "No" << "\n";
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