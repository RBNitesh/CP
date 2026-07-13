#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, w, k;
    cin >> h >> w >> k;

    vector<vector<int>> vec(h+1, vector<int>(w+1));
    for (int i = 1; i <= h; i++){
        string s;
        cin >> s;

        for (int j = 1; j <= w; j++){
            vec[i][j] = s[j-1] - '0';
        }
    }

    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            vec[i][j] += vec[i - 1][j];
            vec[i][j] += vec[i][j - 1];
            vec[i][j] -= vec[i - 1][j - 1];
        }
    }

    int ans = 0;
    for (int i = 1; i <= h; i++){
        for (int j = 1; j <= w; j++){
            
        }
    }
}