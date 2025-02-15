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
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        vector<int> ans(n);
        ans[0]=(b[0]-a[0]);
        for(int i=1; i<n ;i++){
            if(a[i]>=b[i-1]){
                ans[i]=(b[i]-a[i]);
            }
            else{
                ans[i]=(b[i]-b[i-1]);
            }
        }
        for(int i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}