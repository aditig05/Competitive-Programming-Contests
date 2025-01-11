#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n); 
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        map<int, int>mp;
        for(int i = 0; i < n; ++i){
            mp[a[i]]++;
        }
        if(n==0 || n==1 || n==2 || mp.size()==1){
            cout << "YES" << endl;
        }
        else if(mp.size()==2 && (mp.begin()->second ==n/2 || mp.begin()->second ==n/2+1)) {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";

        }
    }
    return 0;
}