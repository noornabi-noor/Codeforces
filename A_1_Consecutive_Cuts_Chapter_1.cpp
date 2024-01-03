#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Compute the longest prefix-suffix array (LPS) for the pattern.
vector<int> computeLPS(const string& pattern) {
    int len = 0; // Length of the current longest prefix suffix

    vector<int> lps(pattern.length(), 0);
    
    int i = 1;
    while (i < pattern.length()) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
    
    return lps;
}

// KMP string matching algorithm
void KMPSearch(const string& text, const string& pattern) {
    vector<int> lps = computeLPS(pattern);
    
    int i = 0; // Index for text[]
    int j = 0; // Index for pattern[]
    
    while (i < text.length()) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }
        
        if (j == pattern.length()) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1]; // Update j to continue searching for more occurrences
        } else if (i < text.length() && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    
    cout << "Text: " << text << endl;
    cout << "Pattern: " << pattern << endl;
    
    KMPSearch(text, pattern);
    
    return 0;
}
