#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    int N;

    cin >> S >> N;

    string res = S.substr(N, S.size() - 2*N);

    cout << res << "\n";
}