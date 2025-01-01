#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b,c;
        cin>>n>>a>>b>>c;


        int distance=((n/(a+b+c))*(a+b+c));
        int day=1;
        while(distance<n) {
            if (day % 3 == 1) {
                distance += a;
            } else if (day % 3 == 2) {
                distance += b;
            } else {
                distance += c;
            }
            day++;
        }
        cout<<day-1+3*(n/(a+b+c))<<endl;
    }
}  
        