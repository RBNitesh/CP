#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// subarray sum (All eles are positive)
ll solve(vector<ll> &b, int k, vector<int>& count) {
    int n = b.size();
    ll ans = 0, sum = 0;
    
    count[0] = 1;
    
    for (int i = 1; i < n; i++) {
        sum += b[i];
        if (sum >= k) {
            ans += count[sum - k];
        }
        count[sum]++;
    }
    
    // O(W) Cleanup: Undo the changes so the array is clean for the next row pair
    // This avoids an O(H*W) memset which would cause TLE.
    sum = 0;
    count[0] = 0;
    for (int i = 1; i < n; i++) {
        sum += b[i];
        count[sum] = 0;
    }
    
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, k;
    cin >> h >> w >> k;

    vector<vector<ll>> a(h + 1, vector<ll>(w + 1));
    for (int i = 1; i <= h; i++){
        string s;
        cin >> s;

        for (int j = 1; j <= w; j++){
            a[i][j] = (s[j-1] == '1');
        }
    }

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            a[i][j] += a[i - 1][j];
        }
    }

    vector<int> count(h*w+1, 0);
    ll ans = 0;
    for (int r1 = 1; r1 <= h; r1++){
        for (int r2 = r1; r2 <= h; r2++){

            vector<ll> b(w + 1, 0);
            for (int j = 1; j <= w; j++){
                b[j] += a[r2][j] - a[r1 - 1][j];
            }
            ans += solve(b, k, count);
        }
    }
    cout << ans << "\n";
    return 0;
}