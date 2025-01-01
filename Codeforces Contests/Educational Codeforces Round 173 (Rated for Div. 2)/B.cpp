#include <iostream>
using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    // Initialize the result with the divisibility by 1 (which is always true)
    bool divisible[5] = {true, false, false, false, false}; // Corresponds to 1, 3, 5, 7, 9

    // Check divisibility for 3
    if (d % 3 == 0 || n >= 3) divisible[1] = true; // n! will be divisible by 3 for n >= 3

    // Check divisibility for 5
    if (d == 5) divisible[2] = true;

    // Check divisibility for 7
    if (n >= 7) divisible[3] = true; // n! will be divisible by 7 for n >= 7

    // Check divisibility for 9
    if (d % 9 == 0 || (n >= 6 && d % 3 == 0)) divisible[4] = true; 
    // n! will be divisible by 9 for n >= 6 if d is also divisible by 3

    // Output the results
    for (int i = 0; i < 5; i++) {
        if (divisible[i]) {
            cout << (i * 2 + 1) << " "; // 0 -> 1, 1 -> 3, 2 -> 5, 3 -> 7, 4 -> 9
        }
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}