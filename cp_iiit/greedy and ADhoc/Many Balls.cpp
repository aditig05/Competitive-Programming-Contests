#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    string s="";
    
    while(n>0){
        if((n%2)!=0) {
            s+='A';
            n--;
        }
        else{
            s+='B';
            n=n/2;
        }
    }
    reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}