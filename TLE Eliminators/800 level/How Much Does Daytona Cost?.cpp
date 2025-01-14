#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k ;
        int f=1;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if(k==a[i]){
                f=0;
            }
        }
        if(f==0) cout<<"yes"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}