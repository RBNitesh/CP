#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        vector<bool> isPrime(sqrt(n) + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i < isPrime.size(); i++){
           if(isPrime[i]){
               for (int j = i * i; j < isPrime.size(); j+=i){
                   isPrime[j] = false;
               }
           } 
        }

        int minLcm = n-1;
        for (int i = 2; i < isPrime.size(); i++){
            if(isPrime[i] && n % i == 0){
                minLcm = (i + 1) / 2 * (n / i);
                break;
            }
        }

        cout << n-minLcm << " " << minLcm << "\n";
    }
    return 0;
}