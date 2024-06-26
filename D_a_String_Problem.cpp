// #include <iostream>
// #include <vector>
// #include <unordered_set>
// #include <string>
// using namespace std;

// // Function to calculate the number of valid t strings
// int count_valid_t(const string& s) {
//     unordered_set<string> substrings; // Set to store unique substrings

//     int n = s.length();

//     // Iterate through all substrings of s
//     for (int i = 0; i < n; ++i) {
//         for (int len = 1; len <= n - i; ++len) {
//             string t = s.substr(i, len);

//             if (t != "a") {
//                 bool valid = true;
//                 int j = 0;

//                 while (j < n) {
//                     // Try to match t or "a"
//                     if (j + t.size() <= n && s.substr(j, t.size()) == t) {
//                         j += t.size();
//                     } else if (s[j] == 'a') {
//                         j++;
//                     } else {
//                         valid = false;
//                         break;
//                     }
//                 }

//                 if (valid) {
//                     substrings.insert(t);
//                 }
//             }
//         }
//     }

//     return substrings.size();
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;

//     while (t--) {
//         string s;
//         cin >> s;

//         cout << count_valid_t(s) << '\n';
//     }

//     return 0;
// }



#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        unordered_set<string> valid_substrings;

        int n = s.size();

        // Iterate over all substrings starting from each position
        for (int i = 0; i < n; ++i) {
            string current = "";

            for (int j = i; j < n; ++j) {
                current += s[j];

                // Check if the current substring is not "a" and is valid
                if (current != "a") {
                    valid_substrings.insert(current);
                }
            }
        }

        cout << valid_substrings.size() << '\n';
    }

    return 0;
}
