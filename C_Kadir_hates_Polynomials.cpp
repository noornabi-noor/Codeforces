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
//     int n,q;
//     cin>>n>>q;
    
//     map<int,int>mp;

//     vll v(n);
//     int mx=INT_MIN;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         mx=max(mx,v[i]);
//     }

//     sort(all(v));

//     while(q--){
//         int x;
//         cin>>x;
//         if(binary_search(all(v),x)){
//             cout<<"0\n";
//         }
//         else if(x>mx){
//             cout<<"POSITIVE\n";
//         }
//         else{
//             int ind = upper_bound(all(v), x) - v.begin();

//             int mul = n - ind;
//             if(mul & 1){
//                 cout<<"NEGATIVE"<<"\n";
//             }
//             else{
//                 cout<<"POSITIVE"<<"\n";
//             } 
//         }
//     }
// }

// int32_t main(){
//     BISMILLAH
//     int te=1;
//     //cin>>te;
//     while(te--){
//         solve();
//     }
//     ALHAMDULILLAH
// }



// #include <iostream>
// using namespace std;

// void solve() {
//     // Reading the input values
//     int m, b, g;
//     cin >> m >> b >> g;

//     int count = 0;

//     // Loop through all possible values for x (i.e., multiples of b)
//     for (int x = 0; x * b <= m; x++) {
//         int remaining = m - (x * b);

//         // Check if remaining is divisible by g
//         if (remaining % g == 0) {
//             int y = remaining / g;
//             // Print the valid combination of (x, y) where x * b + y * g = m
//             cout << "x: " << x << " times " << b << " + y: " << y << " times " << g << " = " << m << endl;
//             count++;
//         }
//     }

//     cout << "Total number of valid combinations: " << count << endl;
// }

// int main() {
//     // Call the solve function to execute the logic
//     solve();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// void solve() {
//     // Reading the input values
//     int m, b, g;
//     cin >> m >> b >> g;

//     int maxX = -1, maxY = -1;  // Variables to store the maximum values of x and y

//     // Loop through all possible values for x (i.e., multiples of b)
//     for (int x = 0; x * b <= m; x++) {
//         int remaining = m - (x * b);

//         // Check if remaining is divisible by g
//         if (remaining % g == 0) {
//             int y = remaining / g;
//             // Update maxX and maxY if this combination gives larger x and y
//             if (x > maxX || (x == maxX && y > maxY)) {
//                 maxX = x;
//                 maxY = y;
//             }
//         }
//     }

//     // Output the maximum pair found
//     if (maxX != -1 && maxY != -1) {
//         cout << "Maximum x: " << maxX << " times " << b << " + Maximum y: " << maxY << " times " << g << " = " << m << endl;
//     } else {
//         cout << "No valid combination found." << endl;
//     }
// }

// int main() {
//     // Call the solve function to execute the logic
//     solve();
//     return 0;
// }



#include <iostream>
using namespace std;

void solve() {
    // Read input values
    long long M, Bw, Gw, Pb, Pg;
    cin >> M >> Bw >> Gw >> Pb >> Pg;

    long long maxJoy = 0;

    // Try picking x blue stones (from 0 to M / Bw)
    for (long long blueStones = 0; blueStones * Bw <= M; ++blueStones) {
        // Calculate remaining weight after picking blueStones
        long long remainingWeight = M - blueStones * Bw;

        // Calculate the number of green stones that can be picked with the remaining weight
        long long greenStones = remainingWeight / Gw;

        // Calculate total joy points for this combination
        long long totalJoy = blueStones * Pb + greenStones * Pg;

        // Update the maximum joy points
        maxJoy = max(maxJoy, totalJoy);
    }

    // Output the maximum joy points Clara can get
    cout << maxJoy << endl;
}

int main() {
    // Call the solve function
    solve();
    return 0;
}
