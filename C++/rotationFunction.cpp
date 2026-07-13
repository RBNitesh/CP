#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();

        vector<int> preSum;
        preSum.push_back(0);

        for (int i = 0; i < n; i++){
            preSum.push_back(preSum[i] + nums[i]);
        }

        for(int it : preSum){
            cout << it << " ";
        }

        int maxi = -1000000001;
        int sum = 0;
        int i = 0, j = 0;

        while(j < 2*n){
            int idx = j % n;
            
            if(j-i+1 > n){
                i++;
                sum -= ((idx < i)? preSum[n] : 0) + preSum[idx] - preSum[i];
            }

            sum += (j - i) * nums[idx];

            if(j-i+1 == n){
                maxi = max({maxi, sum});
            }

            j++;
        }
        return maxi;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        vec.push_back(a);
    }

    Solution obj;
    int res = obj.maxRotateFunction(vec);
    cout << res << " ";
}