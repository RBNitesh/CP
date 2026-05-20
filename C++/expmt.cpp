#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


class A{
    public: 
    A(int &a){ // pass by reference
        a = 10;
    }
};

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

    // running the loop in reverse direction
    // for (auto it = vec.begin(); it != vec.end(); it++){
    //     cout << *(it) << " ";
    // }

    // cout << "\n";

    // for (auto it = vec.rbegin(); it != vec.rend(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << "\n";

    unordered_set<int> u_set; // stores elements randomly
    set<int> set; // stores element in sorted fashion

    // for (int i = 1; i <= 5; i++)
    // {
    //     u_set.emplace(i);
    //     set.emplace(i);
    // }

    // for(auto it : u_set){
    //     cout << it << " ";
    // }

    // cout << "\n";

    // for(auto it : set){
    //     cout << it << " ";
    // }

    // cout << "\n";

    map<int, int> map; // stores key-value pair in the sorted order of their key
    unordered_map<int, int> u_map; // stores key-value pair in random order 

    // for (int i = 1; i <= 5; i++){
    //     map[i] = i*i;
    //     u_map[i] = i * i;
    // }

    // for(auto it : map){
    //     cout << it.first << " " << it.second << "\n";
    // }

    // cout << "\n";

    // for(auto it : u_map){
    //     cout << it.first << " " << it.second << "\n";
    // }

    // cout << "\n";

    int a = 5;
    A obj(a);

    // cout << a << " ";

    // multiset<int> m_set;

    // for (int i = 1; i <= 10; i++){
    //     m_set.emplace(i / 3);
    // }

    // cout << "\n";

    // for(auto it : m_set){
    //     cout << it << " ";
    // }

    multimap<int, pair<int, int>> m_map; // stores duplicates key

    // for (int i = 1; i <= 10;i++){
    //     m_map.insert({i / 3, {i/2, i/4}});
    // }

    // for(auto it : m_map){
    //     cout << it.first << " " << it.second.first << " " << it.second.second << "\n";
    // }

    cout << max({1, 2, 3}) << " " << min({1, 2, 3}) << " ";
}