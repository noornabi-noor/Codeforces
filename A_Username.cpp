// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         for(int i=0;i<s.size();i++){
//             if(s[i]!='0'||s[i]!='1'||s[i]!='2'||s[i]!='3'||s[i]!='4'||s[i]!='5'||s[i]!='6'||s[i]!='7'||s[i]!='8'||s[i]!='9'){
//                 cout<<s[i];
//             }
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string s;
//         cin >> s;

//         for (int i = 0; i < s.size(); i++) {
//             if (!(s[i] >= '0' && s[i] <= '9')) {
//                 cout << s[i];
//             }
//         }

//         cout << "\n";
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
    
//     while (t--) {
//         string s;
//         cin >> s;

//         string result = "";
//         bool insideString = true;

//         for (char ch : s) {
//             if (isdigit(ch)) {
//                 if (insideString) {
//                     result += ch;
//                 }
//             } else {
//                 result += ch;
//                 insideString = false;
//             }
//         }

//         cout << result << "\n";
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        string result = "";
        bool insideString = true;
        bool hasDigit = false;

        for (char ch : s) {
            if (isdigit(ch)) {
                hasDigit = true;
                if (insideString) {
                    result += ch;
                }
            } else {
                result += ch;
                insideString = false;
            }
        }

        // Ensure at least one digit is present in the result
        if (!hasDigit) {
            result += '1'; // You can choose any digit to append
        }

        cout << result << "\n";
    }

    return 0;
}
