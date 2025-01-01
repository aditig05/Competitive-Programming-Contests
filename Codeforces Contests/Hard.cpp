#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        //row 1
        long long row1 = min(m, a+c); 
        long long remaining_c = c - max(0LL, m - a);  
        if (remaining_c < 0) remaining_c = 0;

        //row 2
        long long row2 = min(m, b + remaining_c);  

        //Total
        long long total = row1 + row2;

        cout << total << endl;
    }

    return 0;
}
