#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r ;
        int L, R;
        cin>>L>>R;

        int ans=min(r,R)-max(l,L)+1;
        if(ans<=0){
            ans=1;
        }
        else{
            ans--;
            if(l!=L){
                ans++;
            }
            if(r!=R){
                ans++;
            }

        }
        cout<<ans<<"\n";
    }

    return 0;
}