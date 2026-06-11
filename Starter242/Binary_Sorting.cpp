#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int INF = 1e9;

struct Node {
    int length;
    int sum;
    int maxInv;
    int lazy;
};

vector<Node> st;

void impt(int node, int val) {
    st[node].lazy = val;
    if (val == 0) {
        st[node].sum = 0;
        st[node].maxInv = 0; 
    } else if (val == 1) {
        st[node].sum = st[node].length;
        st[node].maxInv = -INF;
    }
}

void mergeup(int node) {
    st[node].sum = st[2 * node].sum + st[2 * node + 1].sum;
    
    int right_max = st[2 * node + 1].maxInv;
    if (right_max != -INF) {
        right_max += st[2 * node].sum;
    }
    
    st[node].maxInv = max(st[2 * node].maxInv, right_max);
}

void mergedown(int node) {
    if (st[node].lazy != -1) {
        impt(2 * node, st[node].lazy);
        impt(2 * node + 1, st[node].lazy);
        st[node].lazy = -1;
    }
}

void build(int node, int l, int r) {
    st[node].length = r - l + 1;
    st[node].lazy = -1;
    if (l == r) {
        st[node].sum = 0;
        st[node].maxInv = 0;
        return;
    }
    int mid = l + (r - l) / 2;
    build(2 * node, l, mid);
    build(2 * node + 1, mid + 1, r);
    mergeup(node);
}

void update(int node, int l, int r, int ql, int qr, int val) {
    if (ql <= l && r <= qr) {
        impt(node, val);
        return;
    }
    mergedown(node);
    int mid = l + (r - l) / 2;
    if (ql <= mid) update(2 * node, l, mid, ql, qr, val);
    if (qr > mid) update(2 * node + 1, mid + 1, r, ql, qr, val);
    mergeup(node);
}

void solve() {
    int n, q;
    cin >> n >> q;

    st.assign(4 * n + 1, Node());
    build(1, 1, n);

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        
        if (type == 0 || type == 1) {
            int l, r;
            cin >> l >> r;
            update(1, 1, n, l, r, type);
        } else if (type == 2) {
            int cnt1 = st[1].sum;
            int cnt0 = n - cnt1;
            
            if (cnt0 > 0) {
                update(1, 1, n, 1, cnt0, 0);
            }
            if (cnt1 > 0) {
                update(1, 1, n, cnt0 + 1, n, 1);
            }
        }
        
        int ans = max(0, st[1].maxInv) + 1;
        cout << ans << "\n";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t-- > 0){
        
        solve();
        
    }
}