#include<bits/stdc++.h>
using namespace std;

int main() {
    // Input
    int N;
    cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    int maxBuildings = 1; // At least one building satisfies the conditions

    // Map to store sequences for each height
    map<int, map<int, int>> diffCount;

    // Iterate over all buildings
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (H[i] == H[j]) {
                // Calculate the difference in indices
                int diff = j - i;
                // Increment the count for this height and difference
                diffCount[H[i]][diff]++;
                // Update maxBuildings
                maxBuildings = max(maxBuildings, diffCount[H[i]][diff] + 1);
            }
        }
    }

    // Output the maximum number of buildings
    cout << maxBuildings << endl;

    return 0;
}