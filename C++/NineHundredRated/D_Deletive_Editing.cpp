#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s, t;

    while(n-- > 0){
        cin >> s >> t;

        unordered_set<char> u_set;

        int i = s.length() - 1;
        int j = t.length() - 1;

        while(j >= 0){
            char c = t[j];
            if(u_set.count(c)){
                break;
            }
            while(i >= 0 && s[i] != c){
                u_set.emplace(s[i]);
                i--;
            }
            if(i == -1)
                break;
            i--;
            j--;
        }

        if(j == -1){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}