#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Number of materials

        vector<int> a(n), b(n);
        long long totalA = 0; // Sum of array 'a'
        long long totalB = 0; // Sum of array 'b'

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalA += a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            totalB += b[i];
        }

        // Check if total available materials are less than required
        if (totalA < totalB) {
            cout << "NO\n";
            continue;
        }

        // Check if we can redistribute materials
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            // Check if we can satisfy the requirement for each material
            if (a[i] < b[i]) {
                long long needed = b[i] - a[i];
                long long available = totalA - a[i]; // Total available from other materials
                if (available < needed) {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}