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
    int n,m;
    cin>>n>>m;

    
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int mnval=INT_MIN,flg=0;

            if(i-1>=0){
                mnval=max(mnval,a[i-1][j]);
            }

            if(j-1>=0){
                mnval=max(mnval,a[i][j-1]);
            }

            if(i+1<n){
                mnval=max(mnval,a[i+1][j]);
            }

            if(j+1<m){
                mnval=max(mnval,a[i][j+1]);
            }

            if(i-1>=0 && a[i][j]<=a[i-1][j]){
                flg=1;
            }

            if(j-1>=0 && a[i][j]<=a[i][j-1]){
                flg=1;
            }

            if(i+1<n && a[i][j]<=a[i+1][j]){
                flg=1;
            }

            if(j+1<m && a[i][j]<=a[i][j+1]){
                flg=1;
            }

            if(flg==0){
                a[i][j]=mnval;
            }


        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
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



// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to stabilize the matrix according to the given algorithm
// void stabilizeMatrix(vector<vector<int>>& matrix, int n, int m) {
//     bool stabilized = false;

//     while (!stabilized) {
//         stabilized = true;
//         int target_i = -1, target_j = -1;
//         int max_value = -1;

//         // Find the cell with the maximum value that is greater than all its neighbors
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 if (i > 0 && matrix[i][j] > matrix[i-1][j]) {
//                     if (matrix[i][j] > max_value) {
//                         max_value = matrix[i][j];
//                         target_i = i;
//                         target_j = j;
//                     }
//                 }
//                 if (i < n-1 && matrix[i][j] > matrix[i+1][j]) {
//                     if (matrix[i][j] > max_value) {
//                         max_value = matrix[i][j];
//                         target_i = i;
//                         target_j = j;
//                     }
//                 }
//                 if (j > 0 && matrix[i][j] > matrix[i][j-1]) {
//                     if (matrix[i][j] > max_value) {
//                         max_value = matrix[i][j];
//                         target_i = i;
//                         target_j = j;
//                     }
//                 }
//                 if (j < m-1 && matrix[i][j] > matrix[i][j+1]) {
//                     if (matrix[i][j] > max_value) {
//                         max_value = matrix[i][j];
//                         target_i = i;
//                         target_j = j;
//                     }
//                 }
//             }
//         }

//         if (max_value != -1) {
//             // Decrease the value of the target cell
//             matrix[target_i][target_j]--;

//             // Algorithm should continue to stabilize further
//             stabilized = false;
//         }
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;

//         // Read the matrix
//         vector<vector<int>> matrix(n, vector<int>(m));
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cin >> matrix[i][j];
//             }
//         }

//         // Stabilize the matrix
//         stabilizeMatrix(matrix, n, m);

//         // Output the stabilized matrix
//         for (int i = 0; i < n; ++i) {
//             for (int j = 0; j < m; ++j) {
//                 cout << matrix[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }
