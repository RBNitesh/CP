#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--> 0){
        int n;

        priority_queue<int> pq;
        while(n-- > 0){
            int m;

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
        for (int i = 1; i <= n; i++){
            maxMinSum += pq.top();
        }

        cout << maxMinSum << "\n";
    }
    return 0;
}