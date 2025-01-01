#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];  
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];  
        }
        int count1 = a[n-1];
        int count2 = 0;
        for(int i = n-2; i >=0; i--) {
            if(a[i]>b[i+1]){
                count1+=a[i];
                count2+=b[i+1];
            }
        }
        cout<<count1-count2<<endl;
        
    }
}

