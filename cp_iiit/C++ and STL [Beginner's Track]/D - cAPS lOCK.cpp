#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    int n=s.size();
    int cnt=0;
    for(int i=1; i<n; i++){
        if(isupper(s[i])){
            cnt++;
        }
    }
    if(cnt==n-1){
        transform(s.begin()+1,s.end(),s.begin()+1,::tolower);
        if(isupper(s[0])){
            s[0] = char((s[0]-'A')+'a');
        }
        else{
            s[0] = char((s[0]-'a')+'A');
        }
        cout << s << "\n";
    }
    else{
        cout << s << "\n";
    }
}