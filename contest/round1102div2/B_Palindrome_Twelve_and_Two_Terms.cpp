#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> rem_palin;
    for (int i = 0; i < 10; i++){
        rem_palin.push_back(i);
    }
    rem_palin.push_back(22);
    rem_palin.push_back(11);

    while (t-- > 0)
    {
        ll n;
        cin >> n;

        if(n >= rem_palin[n%12]){
            cout << rem_palin[n % 12] << " " << n - rem_palin[n % 12] << "\n";
        }
        else cout << -1 << "\n";
    }
}