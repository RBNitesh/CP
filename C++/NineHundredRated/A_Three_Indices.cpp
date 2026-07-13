#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<int> indices;

        int prev = INT_MAX;
        for (int i = 1; i <= n; i++){
            int a;
            cin >> a;

            if(indices.size() == 3){
                continue;
            }

            if(a > prev && indices.empty()){
                indices.push_back(i-1); // given array is 1-indexed
            }
            if(a < prev && indices.size() == 1){
                indices.push_back(i-1);
                indices.push_back(i);
            }

            prev = a;
        }

        if(indices.size() < 3)
            cout << "NO" << "\n";
        else{
            cout << "YES" << "\n";
            cout << indices[0] << " " << indices[1] << " " << indices[2] << "\n";
        }
    }
    return 0;
}