#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;

    while(t-- > 0){
        cin >> n;
        vector<int> vec;

        for (int i = 0; i < n; i++){
            int a;
            cin >> a;
            vec.push_back(a);
        }

        int minOps = 0;

        for(int i = vec.size()-2; i >= 0; i--){
            if(vec[i+1] == 0){
                minOps = -1;
                break;
            }
            while(vec[i] >= vec[i+1]){
                vec[i] >>= 1;
                minOps++;
            }
        }

        cout << minOps << "\n";
    }
    return 0;
}