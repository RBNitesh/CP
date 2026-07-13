#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(int a, int b){
    return a < b;
}

int main(){
    vector<int> vec(5, 0);

    for (int i = 0; i < 5; i++){
        int ele = rand();
        cout << ele << " ";
        vec[i] = ele;
    }
    cout << "\n";

    sort(vec.begin(), vec.end(), cmp);

    int val = rand();
    cout << "val: " << val << "\n";
    auto it1 = lower_bound(vec.begin(), vec.end(), val);
    auto it2 = upper_bound(vec.begin(), vec.end(), val);

    if(it1 != vec.end()){
        cout << "lower bound val: " << *it1 << "\n";
        cout << "lower bound index: " << it1 - vec.begin() << "\n";
    }
    else{
        cout << "Lower bound not found!" << "\n";
    }

    if(it2 != vec.end()){
        cout << "upper bound val: " << *it2 << "\n";
        cout << "upper bound index: " << it2 - vec.begin() << "\n";
    }
    else{
        cout << "Upper bound not found!" << "\n";
    }
}