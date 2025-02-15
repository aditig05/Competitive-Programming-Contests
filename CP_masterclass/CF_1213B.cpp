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
        int f=0, cnt=0, min=a[n-1];
        for(int i=n-2; i>=0; i--){
            if(a[i]>min){
                cnt++;
            }
            else min=a[i];
        }
        cout<<cnt<<"\n";
    }

    return 0;
}