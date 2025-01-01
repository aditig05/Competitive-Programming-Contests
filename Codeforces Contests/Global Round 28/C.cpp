#include <bits/stdc++.h>
using namespace std;

const int MAX_BITS = 16; // Maximum bits for a binary string of length <= 5000

// Trie Node Structure
struct TrieNode {
    TrieNode* children[2]; // Two children, 0 and 1
    int index; // To store the index of the XOR value
    TrieNode() : children{nullptr, nullptr}, index(-1) {}
};

// Trie class for managing prefix XORs
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }

    // Insert a number into the Trie
    void insert(int x, int idx) {
        TrieNode* node = root;
        for (int i = MAX_BITS - 1; i >= 0; --i) {
            int bit = (x >> i) & 1;
            if (!node->children[bit]) {
                node->children[bit] = new TrieNode();
            }
            node = node->children[bit];
        }
        node->index = idx;
    }

    // Find the maximum XOR of a number with any number in the Trie
    pair<int, int> findMaxXOR(int x) {
        TrieNode* node = root;
        int maxXOR = 0;
        for (int i = MAX_BITS - 1; i >= 0; --i) {
            int bit = (x >> i) & 1;
            int oppositeBit = 1 - bit;
            if (node->children[oppositeBit]) {
                maxXOR |= (1 << i);
                node = node->children[oppositeBit];
            } else {
                node = node->children[bit];
            }
        }
        return {maxXOR, node->index};
    }
};

void solve() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        // Step 1: Precompute prefix XORs
        vector<int> prefixXOR(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixXOR[i + 1] = prefixXOR[i] ^ (s[i] - '0');
        }

        // Step 2: Use Trie to find the best pair of substrings
        Trie trie;
        int maxXOR = -1;
        tuple<int, int, int, int> bestIndices;

        // Insert the initial prefix XOR into the Trie
        trie.insert(prefixXOR[0], 0);

        for (int i = 1; i <= n; ++i) {
            // Find the best XOR for the current prefix XOR
            auto [currentXOR, idx] = trie.findMaxXOR(prefixXOR[i]);

            // Check if the XOR value is the largest so far
            if (currentXOR > maxXOR) {
                maxXOR = currentXOR;
                bestIndices = make_tuple(idx + 1, i, idx + 1, i); // Store 1-based indices
            }

            // Insert the current prefix XOR into the Trie
            trie.insert(prefixXOR[i], i);
        }

        // Output the result
        auto [l1, r1, l2, r2] = bestIndices;
        cout << l1 << " " << r1 << " " << l2 << " " << r2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
