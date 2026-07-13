#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n, p;
        cin >> n >> p;

        vector<int> a(n, 0);
        vector<int> b(n, 0);

        for (int i = 0; i < n; i++){
            int v;
            cin >> v;
            a[i] = v;
        }

        for (int i = 0; i < n; i++){
            int v;
            cin >> v;
            b[i] = v;
        }

        map<int,int> mp;
        for (int i = 0; i < n; i++){
            if(a[i] < p){
                if(mp.count(a[i])){
                    mp[a[i]] += b[i];
                }
                else{
                    mp[a[i]] = b[i];
                }
            }
        }

        ll cost = p;
        n -= 1; // first, pak chenak has to tell the announcement to atleast one guy
        for(auto it : mp){
            cost += it.first * min(n, it.second);
            n -= min(n, it.second);
            if(n == 0)
                break;
        }
        cost += n * p;

        cout << cost << "\n";
    }
    return 0;
}