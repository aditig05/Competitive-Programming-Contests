#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        long long time=0;
        
        //1 0 0 -1 -> 1 1 1 0
        //store the prefix sum first as each number will take up the no. of steps of previous and its own. 
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        //taking the absolute value as the time will be counted incase of negative values as well.
        for(int i=0;i<n;i++){
            time += abs(arr[i]) ;
        }
        
        cout<<time<<endl;
    }
    return 0;
}
