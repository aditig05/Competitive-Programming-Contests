#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Add your solution logic here

        vector<int>s;
        vector<int>t;
        s.push_back(a[0]);
        t.push_back(a[1]);
        for(int i=2; i<n; i++){
            if(a[i]<s[i-2] ||){
            }
        }
    }

    return 0;
}