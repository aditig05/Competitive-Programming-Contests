#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll ways(ll c, ll i, ll &v, ll n, vector<ll>& d){
    if(i == n){
        return 1LL;
    }
    else{
        ll ans = 0LL;
        if(c){
            for(ll j = 0; j <= min(v-1, d[i]); j++){
                if(j < v){
                    ans += ways(0, i+1, v, n, d);
                }
                else{
                    ans += ways(1, i+1, v, n, d);
                }
            }
        }
        else{
            ans += ways(0, i+1, v, n, d);
        }
        return ans;
    }
}

ll val(ll x){

    vector<ll> d;
    while(x){
        d.push_back(x % 10);
        x /= 10;
    }
    reverse(d.begin(), d.end());
    ll ans = 0, n = d.size();
    for(ll i = 1; i <= 9; i++){
        ans += ways((d[0] <= i), 0, i, n, d);
    }
    return ans;
}

int main() {
    ll a, b;
    cin >> a >> b;
    cout << val(b) - val(a-1) << "\n";
}