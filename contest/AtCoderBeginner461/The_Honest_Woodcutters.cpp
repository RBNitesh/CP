#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> A[i];
    }

    bool ans = true;
    for (int i = 1; i <= n; i++){
        int wc;
        cin >> wc;
        if(A[wc] != i)
            ans = false;
    }

    cout << (ans ? "Yes" : "No") << "\n";
}