#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int N, D;
    cin >> N >> D;

    priority_queue<int> pq;

    for (int i = 1; i <= N; i++){
        int power;
        cin >> power;
        pq.push(power);
    }

    int maxWins = 0;
    while(N > 0){
        int maxPower = pq.top();
        pq.pop();

        int playersCnt = (D + maxPower - 1) / maxPower;

        if(playersCnt > N)
            break;

        maxWins++;
        N -= playersCnt;
    }

    cout << maxWins << "\n";

    return 0;
}