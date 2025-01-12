#include <bits/stdc++.h>
using namespace std;

// Function to find the largest power of 2 less than or equal to x
int largestPowerOf2(int x) {
    return 1 << (31 - __builtin_clz(x));  // Highest power of 2 <= x
}

// Function to find the smallest power of 2 greater than or equal to x
int smallestPowerOf2(int x) {
    return 1 << (32 - __builtin_clz(x));  // Smallest power of 2 >= x
}

// Function to find the optimal triplet (a, b, c)
vector<int> findMaxXORTriplet(int l, int r) {
    int a, b, c;
    
    // Find the largest power of 2 <= r
    a = largestPowerOf2(r);

    // Find the smallest power of 2 >= l
    b = smallestPowerOf2(l);

    // Adjust the middle element to maximize XOR
    c = a ^ b;  // A good candidate for the third element

    // Ensure all elements are distinct and within bounds
    if (c >= l && c <= r && c != a && c != b) {
        return {a, b, c};
    }

    // If the XOR of a and b gives us an invalid c, try adjusting
    // the middle element to find a valid distinct c.
    c = b ^ (a & b);  // Try another possible choice for c.

    return {a, b, c};
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        vector<int> triplet = findMaxXORTriplet(l, r);
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
    }
    return 0;
}
