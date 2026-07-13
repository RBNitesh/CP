#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<int> arr(n);
        int maxi = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }

        vector<int> lastOccurence(maxi + 1, -1);
        vector<int> firstOccurence(maxi + 1, -1);

        for (int i = 0; i < n; i++){
            if(firstOccurence[arr[i]] == -1)
                firstOccurence[arr[i]] = i;
            
            else
                lastOccurence[arr[i]] = i;
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++){
            if(firstOccurence[arr[i]] != -1 && lastOccurence[arr[i]] != -1){
                ans = min(ans, firstOccurence[arr[i]] + (n - 1 - lastOccurence[arr[i]]));
            }
        }

        ans = (ans == INT_MAX) ? -1 : ans;

        cout << ans << "\n";
    }
}
