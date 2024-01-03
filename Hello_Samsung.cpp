#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(const string& str, const string& sub) {
    int n = str.length();
    int m = sub.length();
    int j = 0; 
    for (int i = 0; i < n && j < m; i++) {
        if (str[i] == sub[j]) {
            j++;
        }
    }
    return (j == m);
}
string findSponsorName(const string& str, const vector<string>& sponsors) {
    for (const string& sponsor : sponsors) {
        if (isSubsequence(str, sponsor)) {
            return sponsor;
        }
    }
    return "GHOST";
}

int main() {
        vector<string> sponsors = {"Samsung"};
        string str;
        cin >> str;

        string sponsorName = findSponsorName(str, sponsors);
        if(sponsorName=="Samsung"){
            cout<<"SRBD\n";
        }else{
            cout<<"GHOST\n";
        }

    return 0;
}