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

        string s; cin>>s;
        map<char, int>m;
        int ans=0;

        for(auto i:s){
            m[i]++;
        }
        for(auto i:m){
            ans+=(i.second%2);
        }

        if(ans>k && ans-k!=1){
            cout<<"no"<<"\n";
        }
        else{
            cout<<"yes"<<"\n";
        }
    }

    return 0;
}