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

// void solve(){
//     int n, m;
//     cin >> n >> m;

//     char wb[n][m];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin>>wb[i][j];
//         }
//     }
//     int wF=0,bF=0;
//     for(int i=0;i<1;i++){
//         for(int j=0;j<m;j++){
//             if(wb[i][j]=='W'){
//                 wF=1;
//             }
//             else{
//                 bF=1;
//             }
//         }
//     }
//     int w1F=0,b1F=0;
//     for(int i=n-1;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(wb[i][j]=='W'){
//                 w1F=1;
//             }
//             else{
//                 b1F=1;
//             }
//         }
//     }
    
//     int w2F=0,b2F=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<1;j++){
//             if(wb[i][j]=='W'){
//                 wF=1;
//             }
//             else{
//                 bF=1;
//             }
//         }
//     }
//     int w3F=0,b3F=0;
//     for(int i=0;i<n;i++){
//         for(int j=m-1;j<m;j++){
//             if(wb[i][j]=='W'){
//                 w3F=1;
//             }
//             else{
//                 b3F=1;
//             }
//         }
//     }

//     if((wF==w1F || bF==b1F) && (w2F==w3F || b2F==b3F)){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
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



// #include <iostream>
// using namespace std;

// void solve(){
//     int n, m;
//     cin >> n >> m;

//     char wb[n][m];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin>>wb[i][j];
//         }
//     }
//     int wF=0,bF=0;
//     for(int i=0;i<1;i++){
//         for(int j=0;j<m;j++){
//             if(wb[i][j]=='W'){
//                 wF=1;
//             }
//             else{
//                 bF=1;
//             }
//         }
//     }
//     int w1F=0,b1F=0;
//     for(int i=n-1;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(wb[i][j]=='W'){
//                 w1F=1;
//             }
//             else{
//                 b1F=1;
//             }
//         }
//     }
    
//     int w2F=0,b2F=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<1;j++){
//             if(wb[i][j]=='W'){
//                 wF=1;
//             }
//             else{
//                 bF=1;
//             }
//         }
//     }
//     int w3F=0,b3F=0;
//     for(int i=0;i<n;i++){
//         for(int j=m-1;j<m;j++){
//             if(wb[i][j]=='W'){
//                 w3F=1;
//             }
//             else{
//                 b3F=1;
//             }
//         }
//     }

//     if(wF==w1F || bF==b1F || w2F==w3F || b2F==b3F){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
//     }

// }

// int main() {
//     solve();
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define mod 1000000007
const int N = (int)1e6;
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0;
#define YES cout << "YES" << '\n'
#define Yes cout << "Yes" << '\n'
#define yes cout << "yes" << '\n'
#define NO cout << "NO" << '\n'
#define No cout << "No" << '\n'
#define no cout << "no" << '\n'
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

int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
int mod_div(int a, int b) { return mod_mul(a, inv(b)); }
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
int fact(int a) { if (a == 0 || a == 1) { return 1; } return mod_mul(a, fact(a - 1)); }
int nPr(int n, int r) { if (r > n) { return 0;} return mod_div(fact(n), fact(n - r));}
int nCr(int n, int r) { if (r > n) { return 0; } return mod_div(fact(n), mod_mul(fact(r), fact(n - r))); }

//.........Code Start Here.........

void solve(){
    int n, m;
    cin >> n >> m;
 
    vector<vector<char>> mat(n, vector<char>(m, 'a'));
    for(int i =0;i<mat.size();i++){
        for(int j = 0;j<mat[0].size();j++){
            cin>>mat[i][j];
        }
    }
    if (n == 1 and m == 1) {
        YES;
        return;
    }
 
    int firstRow, lastRow, firstCol, lastCol;
    firstRow = 0;
    lastRow = n - 1;
    firstCol = 0;
    lastCol = m - 1;
    bool row1equal = true,row2equal=true;
 
    for (int i = 0; i <= lastCol - 1; i++) {
        if (mat[firstRow][i] != mat[firstRow][i + 1]) {
            row1equal = false;
        }
    }
    char firstRowCol = mat[firstRow][0];
    for (int i = 0; i <= lastCol - 1; i++) {
        if (mat[lastRow][i] != mat[lastRow][i + 1]) {
            row2equal = false;
        }
    }
    char lastRowCol = mat[lastRow][0];
 
    if (row1equal and row2equal and firstRowCol != lastRowCol) {
        NO;
        return;
    }
 
    bool col1equal=true,col2equal=true;
    for (int i = 0; i <= lastRow - 1; i++) {
        if (mat[i][firstCol] != mat[i+1][firstCol]) {
            col1equal = false;
        }
    }
    char firstColuCol = mat[0][firstCol];
    for (int i = 0; i <= lastRow - 1; i++) {
        if (mat[i][lastCol] != mat[i+1][lastCol]) {
            col2equal = false;
        }
    }
    char lastColucol = mat[0][lastCol];
 
    if (col1equal and col2equal and firstColuCol != lastColucol) {
        NO;
        return;
    }
    YES;
}

int32_t main(){
    BISMILLAH
    int te=1;
    cin>>te;
    while(te--){
        solve();
    }
    ALHAMDULILLAH
}