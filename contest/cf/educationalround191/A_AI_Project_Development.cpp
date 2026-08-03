#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t-- > 0){
        int n, x, y, z;
        cin >> n >> x >> y >> z;

        int ans1 = (n + (x + y - 1)) / (x + y);
        int ans2 = z + (max(0, n - z * x + x + 10*y - 1)) / (x + 10*y);

        cout << min(ans1, ans2) << "\n";
    }
}