#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> permutation(n);
        int idx = k-1, i = 1;
        for (i = 1; idx < n; ++i) {
            permutation[idx] = i;
            idx += k; 
            //if (idx >= n) idx = idx % n;
        }
        
        int num = i;
        for (int i = 0; i < n; ++i) {
            if (permutation[i] == 0) { 
                permutation[i] = num++;
            }
        }

        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
