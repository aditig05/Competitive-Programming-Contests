#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;
        string s;
        cin >> s;

        int i = 0, j = 0;
        int cnt = 0;

        // Set a maximum limit to prevent infinite loops
        const int MAX_DOUBLINGS = 20;  // Limit the number of times `x` can double
        const int MAX_LENGTH = 1e6;   // Maximum allowed length for `x`

        while (j < m) {
            if (x.size() > MAX_LENGTH) {
                cnt = -1;
                break;
            }
            
            if (x[i] != s[j]) {
                if (i < n - 1) {
                    i++;
                    j = 0;
                } else {
                    cnt++;
                    if (cnt > MAX_DOUBLINGS) {  // If `cnt` exceeds limit, terminate
                        cnt = -1;
                        break;
                    }
                    x = x + x;
                    n = x.size();
                    i++;
                    j = 0;
                }
            } else {
                if (i < n - 1) {
                    i++;
                    j++;
                } else {
                    cnt++;
                    if (cnt > MAX_DOUBLINGS) {  // If `cnt` exceeds limit, terminate
                        cnt = -1;
                        break;
                    }
                    x = x + x;
                    n = x.size();
                    i++;
                    j++;
                }
            }
        }

        cout << cnt << "\n";
    }

    return 0;
}
