#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return a == 0 ? b : gcd(b % a, a);
}

void solve(int a, int b, int c){
    unordered_set<string> uset;
    queue<pair<pair<int,int>,int>> q;
    q.push(pair<pair<int,int>,int>({a, b}, c));
    uset.emplace(to_string(a) + "$" + to_string(b) + "$" + to_string(c));

    int steps = 0;
    while(!q.empty()){
        int N = q.size();

        for (int k = 1; k <= N; k++){
            auto &curr = q.front();
            q.pop();

            a = curr.first.first;
            b = curr.first.second;
            c = curr.second;

            if(a == b){
                cout << steps << "\n";
                return;
            }

            string s = to_string(a) + "$" + to_string(b) + "$" + to_string(c + 1);
            if(uset.find(s) == uset.end()){
                q.push(pair<pair<int,int>,int>({a, b}, c + 1));
            }

            int new_a = gcd(a, c);
            int new_b = gcd(b, c);

            s = to_string(new_a) + "$" + to_string(new_b) + "$" + to_string(c);
            if(uset.find(s) == uset.end()){
                q.push(pair<pair<int,int>,int>({new_a, new_b}, c));
            }
        }
        steps++;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        int a, b, c;
        cin >> a >> b >> c;

        solve(a, b, c);
    }
}