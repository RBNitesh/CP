#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        int ops = 0;
        while(n > 1 && n%6 == 0){
            n /= 6;
            ops++;
        }

        while(n > 1 && n%3 == 0){
            n /= 3;
            ops+=2;
        }

        if(n == 1)
            cout << ops << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}