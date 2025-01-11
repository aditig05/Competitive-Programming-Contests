#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    bool f=false;
    if(islower(s[0])) s[0]=toupper(s[0]);
    for(int i=0; i<s.size(); i++){
        if(isupper(s[i])) f=true;
        else if(islower(s[0]) && isupper(s[i])) f=true;
    }
    if()
    for(auto i:s){
        cout<<i;
    }
}