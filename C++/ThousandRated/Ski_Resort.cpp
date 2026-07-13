#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t-- > 0){
        int n, k, q;
        cin >> n >> k >> q;

        int goodDays = 0;
        for (int i = 1; i <= n; i++){
            int temp;
            cin >> temp;

            if(temp <= q){
                goodDays++;
            }
        }

        long long res;
        if(goodDays < k){
            res = 0;
        }
        else{
            res = ((long long)1 << goodDays) - ((long long)1 << (k - 1));
        }
        cout << res << "\n";
    }
}