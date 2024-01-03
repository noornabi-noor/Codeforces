// #include <bits/stdc++.h>
// using namespace std;

// bool isSubsequence(const string& str, const string& sub) {
//     int n = str.length();
//     int m = sub.length();
//     int j = 0; 
//     for (int i = 0; i < n && j < m; i++) {
//         if (str[i] == sub[j]) {
//             j++;
//         }
//     }
//     return (j == m);
// }
// string findSponsorName(const string& str, const vector<string>& sponsors) {
//     for (const string& sponsor : sponsors) {
//         if (isSubsequence(str, sponsor)) {
//             return sponsor;
//         }
//     }
//     return "0";
// }

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         vector<string> sponsors = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
//         string str;
//         cin >> str;

//         string sponsorName = findSponsorName(str, sponsors);
//         if(sponsorName=="ash"){
//             cout<<"1\n";
//         }
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string str;
//         cin >> str;
//         unordered_map<char, int> freq;
//         for (char c : str) {
//             freq[c]++;
//         }

//         int mSize = 0;
//         const string colors[] = {
//             "blue", "green", "yellow", "red", "purple", "orange",
//             "pink", "grey", "cyan", "brown", "ash", "silver",
//             "gold", "white", "black"
//         };
//         const string colorC[] = {
//             "blue", "green", "yellow", "red", "purple", "orange",
//             "pink", "grey", "cyan", "brown", "ash", "silver",
//             "gold", "white", "black"
//         };

//         int numC = sizeof(colors) / sizeof(colors[0]);

//         for (int i = 0; i < numC; i++) {
//             bool canFormColor = true;
//             for (char c : colorC[i]) {
//                 if (freq[c] == 0) {
//                     canFormColor = false;
//                     break;
//                 }
//             }
//             if (canFormColor) {
//                 mSize++;
//                 for (char c : colorC[i]) {
//                     freq[c]--;
//                 }
//             }
//         }

//         cout << mSize << endl;
//     }

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define lb lower_bound
#define up upper_bound
#define fo(i,a,b) for(int i=a; i<=b; i++)
#define sort0(v) sort(all(v))
#define vll vector<int>
#define vvll vector<vector<int>>


    //.........Code Start Here.........


void solve(){
    string str;
        cin >> str;
        unordered_map<char, int> freq;
        for (char c : str) {
            freq[c]++;
        }

        int mSize = 0;
        const string clr[] = {
            "blue", "green", "yellow", "red", "purple", "orange",
            "pink", "grey", "cyan", "brown", "ash", "silver",
            "gold", "white", "black"
        };
        const string cC[] = {
            "blue", "green", "yellow", "red", "purple", "orange",
            "pink", "grey", "cyan", "brown", "ash", "silver",
            "gold", "white", "black"
        };

        int numC = sizeof(clr) / sizeof(clr[0]);

        for (int i = 0; i < numC; i++) {
            bool f = true;
            for (char c : cC[i]) {
                if (freq[c] == 0) {
                    f = false;
                    break;
                }
            }
            if (f) {
                mSize++;
                for (char c : cC[i]) {
                    freq[c]--;
                }
            }
        }

        cout << mSize << endl;
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// // Function to check if a color can be formed from the given string
// bool canFormColor(const string& str, const string& color) {
//     unordered_map<char, int> charCount;
    
//     // Count the frequency of each character in the string
//     for (char ch : str) {
//         charCount[ch]++;
//     }

//     // Check if there are enough characters to form the color
//     for (char ch : color) {
//         if (charCount.find(ch) == charCount.end() || charCount[ch] <= 0) {
//             return false;
//         }
//         charCount[ch]--;
//     }

//     return true;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string str;
//         cin >> str;

//         int maxSubsetSize = 0;
        
//         // For each color in the fixed set, check if it can be formed
//         string colors[] = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};
//         for (string color : colors) {
//             if (canFormColor(str, color)) {
//                 maxSubsetSize++;
//             }
//         }

//         cout << maxSubsetSize << endl;
//     }

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define fi first
// #define se second
// #define pb push_back
// #define ppb pop_back
// #define lb lower_bound
// #define up upper_bound
// #define fo(i,a,b) for(int i=a; i<=b; i++)
// #define sort0(v) sort(all(v))
// #define vll vector<int>
// #define vvll vector<vector<int>>


//     //.........Code Start Here.........


// void solve(){
//     string s;
//     cin>>s;
//     int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,c12=0,c13=0,c14=0,c15=0,c16=0,c17=0,c18=0,c19=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='b'){
//             c1=1;
//         }
//         else if(s[i]=='l'){
//             c2=1;
//         }
//         else if(s[i]=='u'){
//             c3=1;
//         }
//         else if(s[i]=='e'){
//             c4=1;
//         }
//         else if(s[i]=='g'){
//             c5=1;
//         }
//         else if(s[i]=='r'){
//             c6=1;
//         }
//         else if(s[i]=='n'){
//             c7=1;
//         }
//         else if(s[i]=='y'){
//             c8=1;
//         }
//         else if(s[i]=='o'){
//             c9=1;
//         }
//         else if(s[i]=='w'){
//             c10=1;
//         }
//         else if(s[i]=='d'){
//             c11=1;
//         }
//         else if(s[i]=='p'){
//             c12=1;
//         }
//         else if(s[i]=='a'){
//             c13=1;
//         }
//         else if(s[i]=='i'){
//             c14=1;
//         }
//         else if(s[i]=='k'){
//             c15=1;
//         }
//         else if(s[i]=='c'){
//             c16=1;
//         }
//         else if(s[i]=='h'){
//             c17=1;
//         }
//         else if(s[i]=='s'){
//             c18=1;
//         }
//         else if(s[i]=='v'){
//             c19=1;
//         }
//     }
    
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }