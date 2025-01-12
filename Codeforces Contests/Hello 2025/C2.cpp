#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        if(!(r & (r-1))){
            cout << r << " " << r-1 << " " << r-2 << endl;
        }
        else{
            int b = 0;
            for(int i = 0; i < 31; i++){
                if((1 << i) & r){
                    b = i;
                }
            }
            r = (1 << b);
            cout << r-1 << " " << r << " " << r+1 << endl;
        }
    }

    return 0;
}