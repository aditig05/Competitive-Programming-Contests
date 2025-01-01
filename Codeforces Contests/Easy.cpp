#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> results;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        results.push_back(n - 1);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
