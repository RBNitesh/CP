#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        priority_queue<pair<int,int>> pq;
        for (int i = 1; i <= n; i++){
            int a;
            cin >> a;
            pq.push({(a%k)==0? k : a%k, n - i});
        }

        while(!pq.empty()){
            pair<int, int> p = pq.top();
            pq.pop();
            cout << n - p.second << " ";
        }
        cout << "\n";
    }
    return 0;
}