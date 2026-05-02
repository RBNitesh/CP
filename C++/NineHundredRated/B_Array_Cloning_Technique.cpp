#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t-- > 0){
        cin >> n;

        unordered_map<int, int> u_map;
        int max_f = 0;

        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            if(!u_map[a])
                u_map[a] = 1;
            else
                u_map[a] += 1;

            max_f = max({max_f, u_map[a]});
        }

        // cout << max_f << "\n";

        n -= max_f;
        int minOps = 0;

        while(n > 0){
            minOps += 1; // for copying the array
            minOps += min(n, max_f); // for swapping the element
            n -= max_f;
            max_f <<= 1;
        }

        cout << minOps << "\n";
    }
}