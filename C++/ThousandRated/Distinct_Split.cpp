#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> preDist(n, 0), postDist(n, 0);
        vector<bool> vis(26, false);
        int distCnt = 0;
        for (int i = 0; i < n; i++){
            if(!vis[s[i]-'a']){
                distCnt++;
                vis[s[i] - 'a'] = true;
            }
            preDist[i] = distCnt;
        }

        for (int i = 0; i < 26;i++)
            vis[i] = false;

        distCnt = 0;
        for (int i = n - 1; i >= 0; i--){
            if(!vis[s[i]-'a']){
                distCnt++;
                vis[s[i] - 'a'] = true;
            }
            postDist[i] = distCnt;
        }

        int maxDist = preDist[n - 1];

        for (int i = 0; i < n-1; i++){
            maxDist = max(maxDist, preDist[i] + postDist[i + 1]);
        }
        cout << maxDist << "\n";
    }
    return 0;
}