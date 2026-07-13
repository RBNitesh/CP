#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            string s;
            cin >> s;

            vector<int> pre_sum(n + 1, 0);
            for (int i = 0; i < n; ++i) {
                pre_sum[i + 1] = pre_sum[i] + (s[i] == '(' ? 1 : 0);
            }

            vector<int> suff_sum(n + 1, 0);
            for (int i = n - 1; i >= 0; i--) {
                suff_sum[i] = suff_sum[i + 1] + (s[i] == ')' ? 1 : 0);
            }

            int min_bracket_count = n + 1;
            int max_pairs = -1;
            for (int i = 0; i <= n; ++i) {
                int bracket_count = pre_sum[i] + suff_sum[i];
                if (bracket_count < min_bracket_count) {
                    min_bracket_count = bracket_count;
                    max_pairs = i;
                }
            }

            vector<int> bracket_indices;
            for (int i = 0; i < max_pairs; ++i) {
                if (s[i] == '(') {
                    bracket_indices.push_back(i);
                }
            }
            for (int i = max_pairs; i < n; ++i) {
                if (s[i] == ')') {
                    bracket_indices.push_back(i);
                }
            }

            int deletions = min(min_bracket_count, k);
            string ans(n, '0');
            for (int i = 0; i < deletions; i++) {
                ans[bracket_indices[i]] = '1';
            }

            cout << ans << "\n";
        }
    }
    return 0;
}