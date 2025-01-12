#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin>>a; int ans = 0;
    for(int i = 1; i<=9; i++) {
        for(int j = 1; j <= 9; j++){
            if((i * j) != a){
                ans += (i * j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}