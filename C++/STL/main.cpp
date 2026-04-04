#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    return a + b;
}

void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << " ";
    pair<pair<int, int>, int> p2 = {{1, 2}, 3};
    cout << p2.first.first << " " << p2.first.second << " " << p2.second << "\n";
}

void explainVector(){
    vector<int> v1(5, 20);
    vector<int> v2(v1);
    // for (int i = 0; i < v1.size(); i++){
    //     cout << v1[i] << " ";
    // }

    vector<int>::iterator it = v1.begin();
    for (auto it = v1.begin(); it != v1.end(); it++){
        cout << *(it) << " ";
    }
  
    for(auto it : v1){
        cout << it << " ";
    }

    // v.erase(st, end)
    // v.insert(st, count, ele);
    // v.pop_back();
    // v.swap(v1, v2);
    // v.clear();
    // v.empty();
}

void explainList(){
    list<int> lst;

    /*
        lst.push_back();
        lst.emplace_back();
        lst.push_front();
        
        rest functions are same as vector
        begin, end, rbegin, clear, insert, size, swap
    */
}

void explainDeque(){
    deque<int> dq;

    /*
        dq.push_back();
        dq.emplace_back();
        dq.push_front();
        dq.emplace_front();
        dq.pop_back();
        dq.pop_front();
        dq.back();
        dq.front();

        rest functions are same as vector
        begin, end, rbegin, clear, insert, size, swap
    */
}

void explainStack(){
    stack<int> st;

    /*
        st.push();
        st.pop();
        st.top();
        st.size();
        st.empty();

        stack<int> st1, st2;
        st1.swap(st2);
    */
}

void explainQueue(){
    queue<int> q;

    /*
        q.push();
        q.pop();
        q.back();
        q.front();
    */
}

void explainPQ(){
    // max heap
    priority_queue<int> pq;
    // min heap
    priority_queue<int, vector<int>, greater<int>> pq;

    /*
        pq.push();
        pq.top();
    */
}

void explainSet(){
    // store everything uniquely and sorted fashion
    set<int> st;
    st.insert();
    st.emplace();

    // Functionality of insert in vector
    // can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);

    // {1, 2, 3, 4, 5}
    st.erase(5); // erases 5, takes logarithmic time

    int cnt = st.count(1); // 1 or 0

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function works in same way as it does in vector.

    auto it = st.lower_bound();

    auto it = st.upper_bound(); 
}

void explainMultiSet(){
    // Everything is same as set
    // except that it can store duplicate eles

    multiset<int> mset;
    /*
        ms.insert(1);
        ms.erase(1);
        int cnt = ms.count(1);

        // erase all occurences
        ms.erase(1);

        // erase single ele
        ms.erase(ms.find(1));

        ms.erase(ms.find(1), ms.find(1) + 2);

        rest all functions are same as set
    */
}

void explainUset(){
    unordered_set<int> set;
    // lower_bound and upper_bound functions doesn't work
    // rest all functions are same
    // as above, it does not stores in any particular order,
    // it has better time complexity than set in most cases
    // except some when collision happens
}

void explainMap(){
    map<int, int> map1;
    map<int, pair<int, int>> map2;

    /*
        map1[1] = 2;
        map1.emplace({3, 4});
        map1.insert({2, 4});
        map2(5,{4,5});

        for(auto it : map1){
            cout << it.first << " " << it.second << endl;
        }

        cout << map[1];
    */
}

int main(){
    // int a, b;
    // cout << "Enter two number a and b: ";
    // cin >> a >> b;
    // cout << sum(a, b);
    explainPair();
    explainVector();
}
