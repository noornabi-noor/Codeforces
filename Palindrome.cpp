// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>
// using namespace std;

// // Function to calculate the minimum cost to make the string a palindrome
// int minCostToMakePalindrome(string s) {
//     int n = s.size();
//     vector<vector<int>> dp(n, vector<int>(n, 0));

//     for (int length = 2; length <= n; ++length) {
//         for (int i = 0; i <= n - length; ++i) {
//             int j = i + length - 1;
//             if (s[i] == s[j]) {
//                 dp[i][j] = dp[i + 1][j - 1];
//             } else {
//                 int cost = INT_MAX;

//                 // Case 1: Change s[i] to s[j]
//                 if (tolower(s[i]) == tolower(s[j])) {
//                     cost = min(cost, 1 + dp[i + 1][j - 1]);
//                 } else {
//                     cost = min(cost, 2 + dp[i + 1][j - 1]);
//                 }

//                 // Case 2: Change s[j] to s[i]
//                 if (tolower(s[j]) == tolower(s[i])) {
//                     cost = min(cost, 1 + dp[i + 1][j - 1]);
//                 } else {
//                     cost = min(cost, 2 + dp[i + 1][j - 1]);
//                 }

//                 dp[i][j] = cost;
//             }
//         }
//     }
    
//     return dp[0][n - 1];
// }

// int main() {
//     string s;
//     cin >> s;

//     int result = minCostToMakePalindrome(s);
//     cout << result << endl;

//     return 0;
// }



#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int minCostToMakePalindrome(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    int oddCount = 0;
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }
    
    // To make the string palindrome, at most one character can have an odd frequency
    int cost = 0;
    if (oddCount > 1) {
        cost = (oddCount - 1) / 2 * 2; // Change characters to reduce odd counts to at most one
    }
    
    return cost;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        cout << minCostToMakePalindrome(s) << endl;
    }
    
    return 0;
}
