// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define mod 1000000007
// const int N = (int)1e6;
// #define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
// #define ALHAMDULILLAH return 0;
// #define YES cout << "YES" << '\n'
// #define Yes cout << "Yes" << '\n'
// #define yes cout << "yes" << '\n'
// #define NO cout << "NO" << '\n'
// #define No cout << "No" << '\n'
// #define no cout << "no" << '\n'
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

// int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
// int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
// int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
// int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
// int mod_div(int a, int b) { return mod_mul(a, inv(b)); }
// int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
// int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
// int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
// int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
// int fact(int a) { if (a == 0 || a == 1) { return 1; } return mod_mul(a, fact(a - 1)); }
// int nPr(int n, int r) { if (r > n) { return 0;} return mod_div(fact(n), fact(n - r));}
// int nCr(int n, int r) { if (r > n) { return 0; } return mod_div(fact(n), mod_mul(fact(r), fact(n - r))); }

// //.........Code Start Here.........

// bool isNonDecreasing(const vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; i++) {
//         if (arr[i] < arr[i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// bool Rotation(const vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n; i++) {
//         bool sorted = true;
//         for (int j = 1; j < n; j++) {
//             if (arr[(i + j) % n] < arr[(i + j - 1) % n]) {
//                 sorted = false;
//                 break;
//             }
//         }
//         if (sorted) {
//             return true;
//         }
//     }
//     return false;
// }

// void solve(){
//     int n;
//     cin>>n;
//     vll a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     if (Rotation(a)) {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

// int32_t main(){
//     BISMILLAH
//     int te=1;
//     cin>>te;
//     while(te--){
//         solve();
//     }
//     ALHAMDULILLAH
// }


// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define ld long double
// // #define lld long long double
// // #define ull unsigned long long
// // #define pll pair<int, int>

// // #define mod 1000000007
// // const int N = (int)1e6;
// // #define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
// // #define ALHAMDULILLAH return 0;
// // #define YES cout << "YES" << '\n'
// // #define Yes cout << "Yes" << '\n'
// // #define yes cout << "yes" << '\n'
// // #define NO cout << "NO" << '\n'
// // #define No cout << "No" << '\n'
// // #define no cout << "no" << '\n'
// // #define all(x) (x).begin(),(x).end()
// // #define rall(x) (x).rbegin(),(x).rend()

// // #define fi first
// // #define se second
// // #define pb push_back
// // #define ppb pop_back
// // #define lb lower_bound
// // #define up upper_bound
// // #define fo(i,a,b) for(int i=a; i<=b; i++)
// // #define sort0(v) sort(all(v))
// // #define vll vector<int>
// // #define vvll vector<vector<int>>

// // int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
// // int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
// // int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
// // int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
// // int mod_div(int a, int b) { return mod_mul(a, inv(b)); }
// // int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
// // int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
// // int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// // int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
// // int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
// // int fact(int a) { if (a == 0 || a == 1) { return 1; } return mod_mul(a, fact(a - 1)); }
// // int nPr(int n, int r) { if (r > n) { return 0;} return mod_div(fact(n), fact(n - r));}
// // int nCr(int n, int r) { if (r > n) { return 0; } return mod_div(fact(n), mod_mul(fact(r), fact(n - r))); }

// // //.........Code Start Here.........


// // void solve() {
// //     int n;
// //     cin >> n;
// //     vll v(n);
// //     vector<pair<int, int>> mp;
    
// //     for (int i = 0; i < n; i++) {
// //         cin >> v[i];
// //         mp.pb({v[i], i + 1}); 
// //     }
    
// //     sort(all(mp));
    
// //     vll a(n);
// //     for (int i = 0; i < n; i++) {
// //         a[i] = mp[i].second;
// //     }
    
// //     int ind = 0;
// //     for (int i = 0; i < n; i++) {
// //         if (a[i] == n) { 
// //             ind = i + 1;
// //             break;
// //         }
// //     }
    
// //     vll b, c;
// //     for (int i = 0; i < ind ; i++) {
// //         b.pb(a[i]);
// //     }
// //     for (int i = ind; i < n; i++) {
// //         c.pb(a[i]);
// //     }
// //     int b1=0;
// //     for (int i = 1; i < b.size(); i++) {
// //         if(b[i-1]<=b[i]){
// //             b1=1;
// //         }
// //         else{
// //             b1=0;
// //             break;
// //         }
// //     }

// //     int c1=0;
// //     for (int i = 1; i < c.size(); i++) {
// //        if(c[i-1]<=c[i]){
// //             c1=1;
// //        }
// //        else{
// //             c1=0;
// //             break;
// //        }
// //     }

// //     if(b1==1 && c1==1 || b.size()==n){
// //         cout<<"Yes\n";
// //     }
// //     else{
// //         cout<<"No\n";
// //     }

// // }

// // int32_t main(){
// //     BISMILLAH
// //     int te=1;
// //     cin>>te;
// //     while(te--){
// //         solve();
// //     }
// //     ALHAMDULILLAH
// // }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int tm=n,s=0;
//     while(n>0){
//         s=n%10+(10*s);
//         n/=10;
//     }
//     if(s==tm){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     vector<int>ind;
//     for(int i=0;i<s.length();i++){
//         if(s[i]==','){
//             ind.push_back(i);
//         }
//     }
//     for(int i=0;i<ind.size();i++){
//         cout<<ind[i]<<" ";
//     }
//     cout<<"\n";
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     vector<int> ind;
//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == ',') {
//             ind.push_back(i);
//         }
//     }
//     for (int i = 0; i < ind.size(); i++) {
//         cout << ind[i] << " ";
//     }
//     cout << "\n";
//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty()) return "";
    
//     // Start with the first string as the initial prefix
//     string prefix = strs[0];
    
//     for (int i = 1; i < strs.size(); ++i) {
//         while (strs[i].find(prefix) != 0) {
//             prefix = prefix.substr(0, prefix.length() - 1);
//             if (prefix.empty()) return "";
//         }
//     }
//     return prefix;
// }

// int main() {
//     vector<string> strs1 = {"flower", "flow", "flight"};
//     vector<string> strs2 = {"dog", "racecar", "car"};

//     cout << "Longest common prefix for strs1: " << longestCommonPrefix(strs1) << endl;
//     cout << "Longest common prefix for strs2: " << longestCommonPrefix(strs2) << endl;

//     return 0;
// }



// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// string longestCommonPrefix(vector<string>& strs) {
//     if (strs.empty()) return "";
    
//     // Start with the first string as the initial prefix
//     string prefix = strs[0];
    
//     for (int i = 1; i < strs.size(); ++i) {
//         while (strs[i].find(prefix) != 0) {
//             prefix = prefix.substr(0, prefix.length() - 1);
//             if (prefix.empty()) return "";
//         }
//     }
//     return prefix;
// }

// int main() {
//     vector<string> strs;
//     string input;
//     cout << "Enter strings one by one (type 'END' to stop):" << endl;
//     while (true) {
//         getline(cin, input);
//         if (input == "END") break;
//         strs.push_back(input);
//     }

//     string result = longestCommonPrefix(strs);
//     if (result.empty()) {
//         cout << "There is no common prefix among the input strings." << endl;
//     } else {
//         cout << "The longest common prefix is: " << result << endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='I'){
            res+=1;
        }
        else if(s[i]=='V'){
            res+=5;
        }
        else if(s[i]=='X'){
            res+=10;
        }
        else if(s[i]=='L'){
            res+=50;
        }
        else if(s[i]=='C'){
            res+=100;
        }
        else if(s[i]=='D'){
            res+=500;
        }
        else if(s[i]=='M'){
            res+=1000;
        }
    }
    for(int i=1;i<s.size();i++){
        if((s[i-1]=='I' && s[i]=='V') || (s[i-1]=='I' && s[i]=='X')){
            res-=2;
        }
        else if((s[i-1]=='X' && s[i]=='L') || (s[i-1]=='X' && s[i]=='C')){
            res-=20;
        }
        else if((s[i-1]=='C' && s[i]=='D') || (s[i-1]=='C' && s[i]=='M')){
            res-=200;
        }
    }
    cout<<res<<"\n";
    return 0;
}