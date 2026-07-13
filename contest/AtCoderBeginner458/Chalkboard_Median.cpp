#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, q;
    cin >> x >> q;

    priority_queue<int> pq1;
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq1.push(x);
    int median = x;

    for (int i = 1; i <= q; i++){
        int a, b;
        cin >> a >> b;

        int mini = min(a, b);
        int maxi = max(a, b);

        if(maxi <= median){
            pq1.push(mini);
            pq1.push(maxi);

            pq2.push(pq1.top());
            pq1.pop();
        }
        else if(mini <= median && maxi > median){
            pq1.push(mini);
            pq2.push(maxi);
        }
        else{ // mini > median
            pq2.push(mini);
            pq2.push(maxi);

            pq1.push(pq2.top());
            pq2.pop();
        }

        median = pq1.top();

        cout << median << "\n";
    }
}