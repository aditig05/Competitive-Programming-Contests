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
        cin >> n;

        string s;
        cin >> s;
        int f=0;
        int cnt=0;

        for(int i = 0; i<n-2; i++) {
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                f=1;
                break;
            }
        }
        
        if(f==1){
            cout <<'2'<<endl;
        }
        else{
            for(int i =0; i<n; i++){
                if(s[i] == '.'){
                    cnt++;
                }
            }
            if(cnt==0) cout <<'0'<<endl;
            else cout<<cnt<<endl;
        }
    }
    return 0;
}