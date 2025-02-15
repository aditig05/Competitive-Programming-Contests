#include <bits/stdc++.h>
using namespace std;

string minimizeString(const string& s) {
    string ans = "";
    int cnt = 0;
    for (char c : s) {
        if (c != 'C') {
            if(c == 'A') cnt+=2;
            else cnt++;
        }
        else{
            int a = cnt/2;
            while(a--){
                ans += 'A';
            }
            if((cnt % 2)!=0) ans += 'B';
            ans+='C';
            cnt=0;
        }
    }
    int a = cnt/2;
    while(a--){
        ans += 'A';
    }
    if((cnt % 2)!=0) ans += 'B';
    cnt=0;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    cout << minimizeString(s) << "\n";

    return 0;
}