#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;

    while(t-- > 0){
        cin >> s;

        int cnt0 = 0;
        for(char c : s){
            if(c == '0')
                cnt0++;
        }

        int cnt1 = s.size() - cnt0;
        int cost = s.size() - 2 * min(cnt0, cnt1);

        cout << cost << "\n";
    }
    return 0;
}