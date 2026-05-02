#include<bits/stdc++.h>
using namespace std;

int compute(int m, set<int> set, int k){
    if(m == 0)
        return 0;
    int ans = INT_MAX;
    for(int it : set){
        ans = min(ans, 1 + compute((m * it) % k, set, k));
    }
    return ans;
}

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

        vector<int> preMult;
        vector<int> postMult;

        preMult.push_back(vec[0]%k);
        for (int i = 1; i < vec.size(); i++){
            preMult.push_back((preMult[i - 1] * vec[i]) % k);
        }

        postMult.push_back(vec[n - 1] % k);
        for (int i = n - 2; i >= 0; i--){
            postMult.push_back((postMult[i + 1] * vec[i]) % k);
        }

        set<int> set;
        for (int i = 0; i < n; i++){
            set.emplace(((i == 0? 1 : preMult[i-1]) * (i == n-1? 1 : postMult[i+1])) % k);
        }

        int res = compute(m, set, k);

        cout << res << "\n";
    }
    return 0;
}