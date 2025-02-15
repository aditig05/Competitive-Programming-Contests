#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x ;

        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        vector<int> b(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> b[i];
        }
        
        vector<pair<int,int>>c;
        for(int i = 1; i <= n; i++){
            c.push_back({a[i], i});
        }

        sort(c.begin(),c.end());
        sort(b.begin()+1, b.end());

        vector<int>d(2*n+1);
        for(int i = 1; i <= x; i++){
            d[n-x+i] = b[i];
        }
        for(int i = 1; i <= n-x; i++){
            d[i] = b[i+x];
        }
        int p = 0;
        for(int i = 0; i < n; i++){
            b[c[i].second] = d[i+1];
            if(c[i].first > d[i+1]){
                p++;
            }
        }
        if(p != x){
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
            for(int i = 1; i <= n; i++){
                cout << b[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}