#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;
        cin >> N >> S; 
        
        int zero = 0, one = 0;

        // Incrementally check the string
        for (int i = 0; i < N; ++i) {
            if (S[i] == '0') {
                zero++;
            } else if (S[i] == '1') {
                one++;
            }

            // If both '0' and '1' are found, break early as we have the option of either delete Si or Si+1. And we can take advantage of decresing the string length to 1 if there exists 1 and 0 both atleast once.
            if (zero > 0 && one > 0) {
                break;
            }
        }

        // Output result based on counts
        if (zero > 0 && one > 0) {
            cout << '1' << endl;
        } else {
            cout << N << endl;
        }
    }

    return 0;
}
