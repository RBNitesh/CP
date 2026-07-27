#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
    public:
        int INF = INT_MAX;
        vector<int> dp;
        
        int solve(int i, string source, string target, vector<vector<pair<int,int>>>& arr, vector<vector<string>>& rules,vector<int>& costs){
            if(i == source.size()) return 0;
    
            if(dp[i] != -1) return dp[i];
    
            int ans = INT_MAX;
            for(pair<int,int> p : arr[i]){
                string pat = rules[p.first][0];
    
                int localAns = solve(i + pat.size(), source, target, arr, rules, costs);
                if(localAns != INT_MAX){
                    ans = min(ans, costs[p.first] + p.second + localAns);
                }
            }
            return dp[i] = ans;
        }
        
        int minCost(string source, string target, vector<vector<string>>& rules, vector<int>& costs) {
            int ruleCnt = rules.size();
    
            dp.assign(source.size() + 1, -1);
            
            vector<vector<pair<int,int>>> arr;
            arr.reserve(source.size());
    
            for(int index = 0; index < ruleCnt; index++){
                vector<string>& rule = rules[index];
                string pat = rule[0];
    
                int wildCnt = 0;
    
                vector<string> vec;
                vec.push_back("");
                
                for(char c : pat){
                    int sz = vec.size();
    
                    for(int i = 0; i < sz; ++i){
                        if(c != '*') vec[i] += c;
                        else{
                            wildCnt++;
                            for(char c = 'b'; c <= 'z'; c++){
                                vec.push_back(vec[i] + c);
                            }
                            vec[i] += 'a';
                        }
                    }
                }
    
                int idx = 0;
                for(string& s : vec){
                    while((idx = source.find(s, idx)) != string::npos){
                        int j = idx;
                        if(target.substr(j, s.size()) == rule[1]){
                            arr[j].push_back({index, wildCnt});
                        }
                        idx = idx+1;
                    }
                }
            }
            return solve(0, source, target, arr, rules, costs);
        }
};
    

int main(){

}

