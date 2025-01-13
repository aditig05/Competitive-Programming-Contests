#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        reverse(a.begin(),a.end());

        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());

        long long i=0, j=0, cnt=0, ans=1, mod =1e9+7LL;
        while(i<n || j<n){
            if(i < n && b[j]<a[i]){
                cnt++;
                i++;
            }
            else {
                ans=(ans*cnt) % mod;
                cnt--;
                j++;
            }
        }
        cout<<ans<<"\n";
    }
}
