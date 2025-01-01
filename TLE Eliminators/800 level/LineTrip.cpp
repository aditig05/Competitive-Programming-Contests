#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min=a[0];
        for(int i = 0; i < n;i++) {
            if(i<n-1){
                if(a[i+1]-a[i]>=min){
                    min=a[i+1]-a[i];
                }
            }
            else{
                if(2*(x-a[i])>=min){
                    min=2*(x-a[i]);
                }
            }
        }
        cout << min << "\n";
    }
    return 0;
}

                                                                                                       