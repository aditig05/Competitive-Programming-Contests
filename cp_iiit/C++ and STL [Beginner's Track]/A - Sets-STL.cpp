#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    set<int>s;
    while(n--){
        int o;
        cin>>o;
        int x;cin>>x;
        if(o==1){
            s.insert(x);
        }
        else if(o==2){
            if(s.find(x)!=s.end()){
                s.erase(x);
            }
        }
        else{ 
            if(s.find(x)!=s.end()){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
