#include<bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    cin >> N;

    map<int, int, greater<int>> map;
    for (int i = 1; i <= N; i++){
        int x;
        cin >> x;

        map[x]++;
    }

    int ans = 0;
    while(map.size() != 1){
        auto ele = map.begin()->first;
        map[ele]--;

        if(map[ele] == 0){
            map.erase(ele);
        }

        map[ele / 2]++;
        ans++;
    }
    cout << ans << "\n";
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