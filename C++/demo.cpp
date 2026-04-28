#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    int fact = 1;
    for (int i = 1; i <= r; i++){
        fact *= n--;
        fact /= i;
    }
    return fact;
}

int main(){
    int l, h, k;
    cin >> l >> h >> k;

    int evenCnt = (h - l + 1) >> 1;
    int oddCnt = (h - l + 1) >> 1;

    if ((h - l + 1) % 2 != 0)
    {
        if (l % 2 == 0)
            evenCnt++;
        else
            oddCnt++;
    }

    int ans = 0;
    for (int x = 0; x <= oddCnt; x+=2){
        int y = k - x;
        ans += nCr(oddCnt + x - 1, x);
        ans += nCr(evenCnt + y - 1, y);
    }

    cout << ans << " ";
    return 0;
}