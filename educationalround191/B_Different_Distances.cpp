#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*

    1,2,1,1,2,2,1,2
    1,1,2,1,2,3,1,3,2,2,3,3

*/

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        while(n > 0){
            if(n == 3){
                cout << n << " " << n << " " << n - 1 << " " << n << " " << n - 1 << " " << n - 2 << " " << n << " " << n - 2 << " " << n - 1 << " " << n - 1 << " " << n - 2 << " " << n - 2;
                n -= 3;
            }
            else{
                cout << n << " " << n - 1 << " " << n << " " << n << " " << n - 1 << " " << n - 1 << " " << n << " " << n - 1;
                n -= 2;
            }

            if(n > 0)
                cout << " ";
        }
        cout << "\n";
    }
}