#include <iostream>
#include <vector>
using namespace std;

// Build the prefix table
vector<int> buildPrefixTable(string pattern) {
    int m = pattern.size();
    vector<int> prefix(m, 0);

    int j = 0; // Length of the previous longest prefix
    for (int i = 1; i < m; i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = prefix[j - 1];
        }
        if (pattern[i] == pattern[j]) {
            j++;
        }
        prefix[i] = j;
    }
    return prefix;
}

// KMP search
void KMPSearch(string text, string pattern) {
    vector<int> prefix = buildPrefixTable(pattern);
    int n = text.size();
    int m = pattern.size();

    int j = 0; // Index for pattern
    for (int i = 0; i < n; i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = prefix[j - 1];
        }
        if (text[i] == pattern[j]) {
            j++;
        }
        if (j == m) {
            cout << "Pattern found at index " << i - m + 1 << endl;
            j = prefix[j - 1];
        }
    }
}

int main() {
    string text = "ababcababcabc";
    string pattern = "abc";

    KMPSearch(text, pattern);

    return 0;
}
//Efficient pattern matching.
//DNA sequence analysis, plagiarism detection, etc.