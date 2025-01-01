#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

bool check_permutation(const string& s, vector<int>& perm) {
    set<int> used;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'p') {
            for (int j = 0; j <= i; ++j) {
                if (used.count(perm[j])) {
                    return false;
                }
                used.insert(perm[j]);
            }
        } else if (s[i] == 's') {
            used.clear();
            for (int j = i; j < s.size(); ++j) {
                if (used.count(perm[j])) {
                    return false;
                }
                used.insert(perm[j]);
            }
        }
    }
    return true;
}

bool find_permutation(const string& s) {
    int n = s.size();
    vector<int> perm(n);
    for (int i = 0; i < n; ++i) {
        perm[i] = i + 1;
    }

    do {
        if (check_permutation(s, perm)) {
            return true;
        }
    } while (next_permutation(perm.begin(), perm.end()));

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (find_permutation(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}