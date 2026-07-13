#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        string s;
        cin >> s;

        if(s[0] == s[s.length()-1])
            cout << s << "\n";
        
        else{
            s[0] = 'a' ^ 'b' ^ s[0];
            cout << s << "\n";
        }
    }
    return 0;
}