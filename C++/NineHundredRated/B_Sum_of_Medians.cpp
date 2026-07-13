#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        int m = (n + 1) >> 1;
        int rigthCnt = n - m;

        ll maxSum = 0;
        vector<int> vec;
        for (int i = 1; i <= n * k; i++){
            int a;
            cin >> a;
            vec.push_back(a);
        }

        int j = n*k - rigthCnt - 1;
        while(k-- > 0){
            maxSum += vec[j];
            j -= rigthCnt+1;
        }
        cout << maxSum << "\n";
    }
    return 0;
}