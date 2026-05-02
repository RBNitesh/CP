#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        unordered_map<int, int> map1, map2;
        int prev = 0; // prev is not present in any of the arrays
        int len = 1;
        for (int i = 1; i <= n; i++){
            int curr;
            cin >> curr;

            if(curr == prev)
                len++;
            else
                len = 1;

            if(!map1.count(curr))
                map1[curr] = len;
            else
                map1[curr] = max(map1[curr], len);

            prev = curr;
        }

        prev = 0;
        len = 1;
        for (int i = 1; i <= n; i++){
            int curr;
            cin >> curr;

            if(curr == prev)
                len++;
            else
                len = 1;

            if(!map2.count(curr))
                map2[curr] = len;
            else
                map2[curr] = max(map2[curr], len);

            prev = curr;
        }

        int maxSubarr = 0;
        for(auto it : map1){
            int key = it.first;
            if(map2.count(key)){
                map1[key] += map2[key];
            }
            maxSubarr = max(map1[key], maxSubarr);
        }

        for(auto it : map2){
            maxSubarr = max(maxSubarr, it.second);
        }
        cout << maxSubarr << "\n";
    }
    return 0;
}