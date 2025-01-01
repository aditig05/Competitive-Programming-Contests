#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check the pairs of consecutive elements
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1]) {
            cout << "YES" << endl;
            return;
        }
        if (a[i] != a[i + 1]) {
            if ((a[i] < a[i + 1] && 2 * a[i] > a[i + 1]) || (a[i] > a[i + 1] && 2 * a[i + 1] > a[i])) {
                cout << "YES" << endl;
                return;
            }
        }
    }

    // If no valid pair is found, return NO
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
