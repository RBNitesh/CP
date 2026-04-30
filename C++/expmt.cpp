#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<int> vec1;

    for (int i = 1; i <= 10; i++){
        vec1.push_back(i);
    }

    vector<int> vec2;

    for (int i = 1; i <= 10; i++){
        vec2.push_back(11-i);
    }

    vector<int> vec(10, 0);
    vec.swap(vec2);

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
}