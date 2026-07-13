#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }

        int pairs = min(cnt0, cnt1);

        if(pairs & 1)
            cout << "DA" << "\n";
        else
            cout << "NET" << "\n";
    }
    return 0;
}