#include <iostream>
#include <cmath> 
using namespace std;

long long max_coins(long long n) {
    if (n <= 3) return 1; 

    int log_n = 0;
    while (n > 1) {
        n >>= 1; // Right shift by 1 bit (equivalent to division by 2)
        log_n++;
    }

    // 2^(log2(n)/2)
    return 1LL << (log_n / 2); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        cout << max_coins(n) << endl;
    }

    return 0;
}