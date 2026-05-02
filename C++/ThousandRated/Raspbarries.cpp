#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n, k;
        cin >> n >> k;

        vector<int> vec(n, 0);

        int m = 1;
        for (int i = 0; i < n; i++){
            int a;
            cin >> a;

            vec[i] = a;

            m *= a;
            m %= k;
        }

        vector<int> preMult(n, 0);
        vector<int> postMult(n, 0);

        preMult[0] = vec[0]%k;
        for (int i = 1; i < vec.size(); i++){
            preMult[i] = (preMult[i - 1] * vec[i]) % k;
        }

        postMult[n-1] = vec[n - 1] % k;
        for (int i = n - 2; i >= 0; i--){
            postMult[i] = (postMult[i + 1] * vec[i]) % k;
        }

        unordered_set<int> u_set;
        for (int i = 0; i < n; i++){
            int rem = (i == 0? 1 : preMult[i-1]) * (i == n-1? 1 : postMult[i+1]) % k;
            u_set.emplace(rem);
        }

        unordered_set<int> found;
        found.emplace(m);

        int ops = 0;
        while(!found.count(0)){
            unordered_set<int> new_found;

            for(int it1 : found){
                for(int it2 : u_set){
                    new_found.emplace((it1 + it2) % k);
                }
            }

            for(int it : new_found){
                found.emplace(it);
            }

            ops++;
        }

        cout << ops << "\n";
    }
    return 0;
}