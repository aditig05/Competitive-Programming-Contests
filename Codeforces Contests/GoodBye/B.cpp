#include <iostream>
#include <vector>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<pair<int, int>, int>> ranges(n);  // (li, ri, original index)
    vector<int> result(n, 1);  // Assume all are unique initially

    int max_value = 2 * n;  // Maximum possible value in any range is 2n
    vector<int> prefix(max_value + 2, 0);  // Prefix sum array

    // Read ranges and mark the prefix array
    for (int i = 0; i < n; i++) {
        cin >> ranges[i].first.first >> ranges[i].first.second;
        int li = ranges[i].first.first;
        int ri = ranges[i].first.second;

        // Mark the range in the prefix array
        prefix[li]++;
        prefix[ri + 1]--;
    }

    // Compute the prefix sum array
    for (int i = 1; i <= max_value; i++) {
        prefix[i] += prefix[i - 1];
    }

    // Apply the condition for each range
    for (int i = 0; i < n; i++) {
        int li = ranges[i].first.first;
        int ri = ranges[i].first.second;

        // Check the condition: prefix(r) - prefix(l-1) >= r - l + 1
        if (prefix[ri] - prefix[li - 1] >= ri - li + 1) {
            result[i] = 0;  // Not unique
        }
    }

    // Output the result as a binary string
    for (int i = 0; i < n; i++) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        solve();  // Process each test case
    }

    return 0;
}
