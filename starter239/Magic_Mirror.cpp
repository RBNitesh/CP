#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int leftStart = n / 2 - 1;
        int rightStart = n / 2;

        int l = leftStart;
        int r = rightStart;

        bool isPossible = true;

        while(l >= 0 && r < n){
            if(arr[leftStart]-arr[l] != arr[r] - arr[rightStart]){
                isPossible = false;
                break;
            }
            l--;
            r++;
        }

        if(isPossible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
