#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  
        }
        
        int chef = a[0];  
        
        sort(a.begin(), a.end());
        
        int cnt=0;
        
        // dealt with the case wheb chef is at end of the array as we can use the right range in that case.
        if(a[n-1]==chef){
            cnt=1000000-a[n-1]+(a[n-1]-a[n-2])/2 + 1;
        }
        // if chef is at first position
        else if(a[0]==chef){
            cnt=chef+ (a[1]-a[0])/2 ;
        }
        //in case it occurs at any place in between 
        else{
        for(int i=0; i<n; i++){
            if (a[i]==chef){
                cnt=(a[i]-a[i-1])/2 + (a[i+1]-a[i])/2 + 1;
                break;
            }
            
        }}
        
        cout<<cnt<<endl;
    }
    return 0;
}
