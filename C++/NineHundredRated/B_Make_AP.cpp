#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;

    ll new_a = 2 * b - c;
    if (new_a > 0 && new_a % a == 0) {
        cout << "YES" << endl;
        return;
    }

    if ((a + c) % 2 == 0) {
        ll new_b = (a + c) / 2;
        if (new_b > 0 && new_b % b == 0) {
            cout << "YES" << endl;
            return;
        }
    }

    ll new_c = 2 * b - a;
    if (new_c > 0 && new_c % c == 0) {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}