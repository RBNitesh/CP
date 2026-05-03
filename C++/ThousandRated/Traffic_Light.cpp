#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t-- > 0){
        int n;
        char c;
        string s;

        cin >> n >> c >> s;

        int maxWaitingTime = 0;
        char prevC = -1;

        for (int i = 0; i < n; i++){
            if(s[i] == c && prevC == -1){
                prevC = i;
            }
            else if(s[i] == 'g' && prevC != -1){
                maxWaitingTime = max(maxWaitingTime, i - prevC);
                prevC = -1;
            }
        }
        cout << maxWaitingTime << "\n";
    }
    return 0;
}