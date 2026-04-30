#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

        if(vec[0] == 1)
            vec[0]++;

        for (int i = 1; i < n; i++){
            if(vec[i] == 1)
                vec[i]++;
            
            if(vec[i] % vec[i-1] == 0)
                vec[i]++;
        }

        for(int it : vec){
            cout << it << " ";
        }
        cout << "\n";
    }
    return 0;
}