#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void dijkstra(){
    priority_queue<pair<int, pair<int, int>>, vector<pair<int,pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;
    pq.push({arr[0], {0, 0}});

    while(!pq.empty()){
        auto curr = pq.top();
        pq.pop();

        int currIdx = curr.second.second;
        int x = curr.second.first;

        int next = currIdx +
    }
}

int main() {
    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        arr.resize(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        
    }
}
