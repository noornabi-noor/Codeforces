#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> buildSuffixArray(const string &s) {
    int n = s.size();
    vector<int> suffixArray(n), rank(n), temp(n);

    for (int i = 0; i < n; i++) {
        suffixArray[i] = i;
        rank[i] = s[i];
    }

    for (int k = 1; k < n; k *= 2) {
        auto cmp = [&](int i, int j) {
            if (rank[i] != rank[j])
                return rank[i] < rank[j];
            int ri = (i + k < n) ? rank[i + k] : -1;
            int rj = (j + k < n) ? rank[j + k] : -1;
            return ri < rj;
        };
        sort(suffixArray.begin(), suffixArray.end(), cmp);

        temp[suffixArray[0]] = 0;
        for (int i = 1; i < n; i++) {
            temp[suffixArray[i]] = temp[suffixArray[i - 1]] + cmp(suffixArray[i - 1], suffixArray[i]);
        }
        rank = temp;
    }
    return suffixArray;
}

vector<int> buildLCPArray(const string &s, const vector<int> &suffixArray) {
    int n = s.size();
    vector<int> rank(n), lcp(n);

    for (int i = 0; i < n; i++) {
        rank[suffixArray[i]] = i;
    }

    int h = 0;
    for (int i = 0; i < n; i++) {
        if (rank[i] > 0) {
            int j = suffixArray[rank[i] - 1];
            while (i + h < n && j + h < n && s[i + h] == s[j + h]) {
                h++;
            }
            lcp[rank[i]] = h;
            if (h > 0) {
                h--;
            }
        }
    }
    return lcp;
}

string longestRepeatedSubstring(const string &s) {
    int n = s.size();
    if (n == 0) return "0";

    vector<int> suffixArray = buildSuffixArray(s);

    vector<int> lcp = buildLCPArray(s, suffixArray);

    int maxLen = 0, index = 0;
    for (int i = 1; i < n; i++) {
        if (lcp[i] > maxLen) {
            maxLen = lcp[i];
            index = suffixArray[i];
        }
    }
    return (maxLen > 0) ? s.substr(index, maxLen) : "0";
}

vector<int> computeLPSArray(const string &pattern) {
    int m = pattern.size();
    vector<int> lps(m);
    int len = 0;  
    lps[0] = 0;   

    int i = 1;
    while (i < m) {
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


int KMPcountOccurrences(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();

    vector<int> lps = computeLPSArray(pattern);
    int count = 0;

    int i = 0;  
    int j = 0;  
    while (i < n) {
        if (pattern[j] == text[i]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;  
            j = lps[j - 1]; 
        } else if (i < n && pattern[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return count;
}


int main() {
    int n;
    cin>>n;
    string s;
    cin >> s;

    string result = longestRepeatedSubstring(s);


    int occurrences = KMPcountOccurrences(s, result);
    if(occurrences>=2){
        cout<<result.size()<<"\n";
    }
    else{
        cout<<"0\n";
    }
    
    return 0;
}