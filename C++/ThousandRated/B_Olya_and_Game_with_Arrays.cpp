#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--> 0){
        int n;
        cin >> n;

        priority_queue<int> pq;
        for (int k = 1; k <= n; k++)
        {
            int m;
            cin >> m;

            int min1 = INT_MAX, min2 = INT_MAX;
            for (int i = 1; i <= m; i++){
                int a;
                cin >> a;

                if(a < min2){
                    min2 = a;

                    if(min2 < min1){
                        int tmp = min1;
                        min1 = min2;
                        min2 = tmp;
                    }
                }
            }
            pq.push(min1);
            pq.push(min2);
        }

        long long maxMinSum = 0;
        for (int i = 1; i <= n-1; i++){
            maxMinSum += pq.top();
            pq.pop();
        }

        while(pq.size() > 1){
            pq.pop();
        }

        maxMinSum += pq.top();

        cout << maxMinSum << "\n";
    }
    return 0;
}