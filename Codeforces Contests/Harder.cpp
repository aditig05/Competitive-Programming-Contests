#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Read the length of array a
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  // Read the array a
        }

        vector<int> b;  // Result array b
        unordered_map<int, int> freq;  // Frequency map to track counts in b
        
        for (int i = 0; i < n; i++) {
            int current = a[i];

            // Add current value to b
            b.push_back(current);
            freq[current]++;  // Increment frequency of the current value

            // Ensure that the frequency of current is the highest or tied
            int max_freq = freq[current];
            for (auto& entry : freq) {
                if (entry.second > max_freq) {
                    max_freq = entry.second;
                }
            }

            // To make sure current is the mode, we pad with numbers 
            // that do not increase the frequency of other numbers unnecessarily
            // while keeping current the mode.
            for (int j = 1; j <= n; j++) {
                if (j != current && freq[j] < max_freq) {
                    b.push_back(j);  // Add padding number to the result array
                    freq[j]++;
                }
            }
        }

        // Print the result array b
        for (int num : b) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();  // Call the solve function to handle all the test cases
    
    return 0;
}
