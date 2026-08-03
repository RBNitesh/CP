#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, n, m, k;
    cin >> t;

    while(t-- > 0){
        int n;
        ll m, k;
        cin >> n >> m >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), [](int a, int b)
            { return a > b; }
        );

        m -= m / k;

        
    }
}
