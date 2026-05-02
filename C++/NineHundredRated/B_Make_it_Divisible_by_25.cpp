#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        ll n;
        cin >> n;

        int minDeletions = 100;

        ll temp = n;
        int digit = 0;
        // 00 50
        int deletionsCnt = 0;
        while(temp){
            if(temp % 10 == 0 || (digit == 1 && temp % 10 == 5))
                digit++;
            else
                deletionsCnt++;

            if(digit == 2){
                minDeletions = min({minDeletions, deletionsCnt});
                break;
            }

            temp /= 10;
        }

        temp = n;
        digit = 0;
        // 25 75
        deletionsCnt = 0;
        while(temp){
            if(temp % 10 == 5 && digit == 0){
                digit = 1;
            }
            else if(digit == 1 && (temp % 10 == 7 || temp % 10 == 2)){
                digit = 2;
            }
            else
                deletionsCnt++;

            if(digit == 2){
                minDeletions = min({minDeletions, deletionsCnt});
                break;
            }

            temp /= 10;
        }

        cout << minDeletions << "\n";
    }
    return 0;
}