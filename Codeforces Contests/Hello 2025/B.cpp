#include <bits/stdc++.h>
using namespace std;

int minimizeBlocks(vector<int>& a, int k) {
    unordered_map<int, int> fre;
    for (int num : a) {
        fre[num]++;
    }
    vector<int> freq;
    for (auto& [key, value] : fre) {
        freq.push_back(value);
    }
    sort(freq.begin(), freq.end());

    int distinctElements = freq.size();
    for (int f : freq) {
        if (k >= f) {
            k -= f;
            distinctElements--;
        } else {
            break;
        }
    }

    return distinctElements;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << max(minimizeBlocks(a, k),1) << endl;
    }
    return 0;
}
