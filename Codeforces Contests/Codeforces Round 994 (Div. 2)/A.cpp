#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  
        }

        int non_zero_segments = 0;
        bool in_segment = false;

        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                if (!in_segment) {
                    non_zero_segments++;
                    in_segment = true;
                }
            } else {
                in_segment = false;
            }
        }

        if (non_zero_segments > 1) {
            cout << 2 << endl;
        } else {
            cout << non_zero_segments << endl;
        }
    }

    return 0;
}
