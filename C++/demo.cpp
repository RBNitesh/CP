#include<bits/stdc++.h>
using namespace std;

// 1 -2 23 14 1 -32 4 3
// 5 -21 -3 4 -14 3 -1

// int compute(int i, int len, bool isPos, vector<int> & vec){
//     if(i == vec.size()){
//         return len == 0 ? 0 : -1e9;
//     }

//     int skip = compute(i + 1, len, isPos, vec);
//     int take = -1e9;

//     if((isPos && vec[i] < 0) || (!isPos && vec[i] > 0)){
//         take = max({take, vec[i] + compute(i + 1, len - 1, (vec[i] > 0) ? true : false, vec)});
//     }

//     return max({take, skip});
// }

// int solve(vector<int> &vec){
//     int n = vec.size();

//     int maxPos = 0; // maxlength subsequence ending with positive
//     int maxNeg = 0; // maxlength subsequence ending with negative 

//     for (int i = 0; i < n; i++){
//         if(vec[i] > 0){
//             maxPos = max({maxPos, 1 + maxNeg});
//         }
//         else{
//             maxNeg = max({maxNeg, 1 + maxPos});
//         }
//     }

//     int maxLen = max({maxPos, maxNeg});

//     // cout << maxLen << " ";

//     return compute(0, maxLen, false, vec);
// }

int main(){
    int n;
    cin >> n;

    vector<int> vec;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    int maxSum = 0;
    int i = 0;

    while(i < n && vec[i] < 0)
        i++;

    while(i < n){
        int maxPos = 0;
        while(i < n && vec[i] > 0){
            maxPos = max({maxPos, vec[i]});
            i++;
        }

        int maxNeg = -1e9;
        while(i < n && vec[i] < 0){
            maxNeg = max({maxNeg, vec[i]});
            i++;
        }

        maxSum += maxPos + maxNeg;
    }
    cout << maxSum << " " << "$";
    return 0;
}
