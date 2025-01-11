#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    map<string,int>m;
    int n; cin>>n;
    while(n--){
        int i; cin>>i;
        string s; cin>>s;
        if(i==1){
            int c; cin>>c;
            m[s]+=c;            
        }
        else if(i==2){
            m[s]=0;
        }
        else{
            cout<<m[s]<<"\n";            
        }
    }
}