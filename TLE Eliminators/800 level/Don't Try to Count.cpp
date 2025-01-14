#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x;
        cin >> x;
        string s;
        cin >> s;
        int ans = INT_MAX;

        for(int i = 0; i < n; i++){
            if(x[i] == s[0]){
                int cnt = 0;
                int p1 = i, p2 = 0, balance = (n - i), upd = n;
                while(p2 < m && x[p1] == s[p2]){
                    p1 = (p1 + 1) % n;
                    p2++;
                    balance--;
                    if(balance == 0){
                        if(p2 < m){
                            cnt++;
                        }
                        balance = upd;
                        upd *= 2;
                    }
                }
                if(p2 == m){
                    ans = min(ans, cnt);
                }
            }
        }

        cout << (ans == INT_MAX ? -1 : ans) << "\n";
    }

    return 0;
}
