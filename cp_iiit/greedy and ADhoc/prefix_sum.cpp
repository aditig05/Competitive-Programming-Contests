#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s;
    cin >> n >> s ;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sum=0, l=0;
    int ans=-1;
    for(int r=0; r<=n; r++){
        sum+=arr[l];
        while(sum>s){
            sum+=arr[l];
        }
        l++;
        ans=max(ans,r-l+1);
    }
    cout<<ans<<endl;

    return 0;
}