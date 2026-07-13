#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> C(N+1);
    vector<int> V(N+1);
    for (int i = 1; i <= N; i++){
        cin >> C[i];
        cin >> V[i];
    }

    priority_queue<pair<int,int>> pq;
    for (int i = 1; i <= N; i++){
        pq.push({V[i], i});
    }

    map<int, bool> mp;
    int colors = 0;

    vector<int> reserve;

    ll maxScore = 0;
    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        // cout << curr.first << "\n";

        if(mp[C[curr.second]])
            reserve.push_back(curr.second);

        else{
            maxScore += curr.first;
            mp[C[curr.second]] = true;
            colors++;
        }  

        if(colors == M)
            break;
    }

    for (int i = 0; i < reserve.size(); i++){
        int idx = reserve[i];
        pq.push({V[idx], idx});
    }

    while(colors < K){
        auto curr = pq.top();
        pq.pop();

        maxScore += curr.first;
        colors++;
    }

    cout << maxScore << "\n";
}