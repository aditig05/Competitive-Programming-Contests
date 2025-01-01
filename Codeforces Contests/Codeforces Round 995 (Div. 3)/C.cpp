#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m); // Missing questions for each list
        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        unordered_set<int> known; // Questions Monocarp knows
        for (int i = 0; i < k; ++i) {
            int q;
            cin >> q;
            known.insert(q);
        }

        string result(m, '0'); // Initialize result with '0's

        // Check if all questions are known
        if ((int)known.size() == n) {
            // Monocarp knows all questions
            result = string(m, '1');
        } else {
            // Otherwise, process each list
            for (int i = 0; i < m; ++i) {
                if (known.find(a[i]) == known.end() && (int)known.size() == n - 1) {
                    result[i] = '1'; // Monocarp knows all questions except a[i]
                }
            }
        }

        cout << result << '\n';
    }

    return 0;
}
