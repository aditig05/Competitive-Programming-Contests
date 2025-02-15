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
        cin >> n  ;

        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        int m; cin>>m;

        while(m--){
            string b; cin>>b;
            if(b.size()!=n){
                cout<<"NO\n";
            }
            else{
                map<char,int>mp;
                map<int,char>mp2;
                int k = 1;
                for(int i = 1; i <= n; i++){
                    if(!mp.count(b[i-1])){
                        mp[b[i-1]] = a[i];
                    }
                    else if(a[i] != mp[b[i-1]]){
                        k = 0;
                        break;
                    }
                    if(!mp2.count(a[i])){
                        mp2[a[i]] = b[i-1];
                    }
                    else if(b[i-1] != mp2[a[i]]){
                        k = 0;
                        break;
                    }
                }
                if(k){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
        // Add your solution logic here
    }

    return 0;
}