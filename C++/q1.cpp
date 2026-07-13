#include<bits/stdc++.h>
using namespace std;

int solve(int i, int last, int N, int R, int end){
    if(i == N){
        return last == end ? 1 : 0;
    }

    int ans = 0;
    for (int j = 1; j <= R; j++){
        if(j == last)
            continue;

        ans += solve(i + 1, j, N, R, end);
    }

    return ans;
}

int main(){
    int N, R, end;
    cin >> N >> R >> end;

    int ans;

    if(N == 1)
        ans = 1;
    else
        ans = solve(2, 1, N, R, end);

    cout << ans << " ";
}

              