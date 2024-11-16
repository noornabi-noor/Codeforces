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

// bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
//     if (a.first == b.first) {
//         return a.second > b.second; 
//     }
//     return a.first < b.first; 
// }

// void solve(){
//     string s;
//     cin >> s;
//     const int length = s.length();
//     vector<pair<int, int>> v;
//     v.reserve(length);
//     int before = 0;
//     for(int i = 0; i < length; i++){
//         v.emplace_back(pair<int, int>{before, i});
//         before = (s[i] == '(')? before+1 : before-1;
//     }
//     sort(v.begin(), v.end(), comparePairs);
//     for(int i = 0; i < length; i++){
//         cout << s[v[i].second];
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

// // Function to calculate factorial modulo p
// long long factorialMod(int num, int p) {
//     long long result = 1;
//     for (int i = 1; i <= num; i++) {
//         result = (result * i) % p;  // Calculate factorial under modulo p
//     }
//     return result;
// }

// int main() {
//     int p, k;
    
//     // Input the prime number p
//     cout << "Enter the prime number p: ";
//     cin >> p;
    
//     // Input the number of factorials to calculate
//     cout << "Enter how many factorial mod p values to compute (e.g. 5): ";
//     cin >> k;

//     // Calculate factorials (p-1)!, (p-2)!, ..., (p-k)! mod p
//     for (int i = 1; i <= k; ++i) {
//         int n = p - i;
//         long long factMod = factorialMod(n, p);
//         cout << n << "! mod " << p << " = " << factMod << endl;
//     }

//     return 0;
// }




#include <iostream>
using namespace std;

// Function to compute modular inverse using Fermat's Little Theorem
long long modInverse(long long a, long long p) {
    long long result = 1;
    long long power = p - 2;  // Fermat's theorem: a^(p-1) ≡ 1 (mod p) => a^(p-2) ≡ a^(-1) (mod p)

    // Fast exponentiation
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * a) % p;
        }
        a = (a * a) % p;
        power /= 2;
    }
    return result;
}

int main() {
    int p, k;
    
    // Input the prime number p
    cout << "Enter the prime number p: ";
    cin >> p;
    
    // Input the number of factorials to calculate
    cout << "Enter how many factorial mod p values to compute (e.g. 5): ";
    cin >> k;

    // Compute (p-1)! mod p using Wilson's Theorem
    long long factMod = p - 1; // Since (p - 1)! ≡ -1 (mod p)
    
    // Print (p-1)! mod p
    cout << "(p-1)! mod " << p << " = " << (p - 1) << endl; // This represents -1 mod p
    
    // Calculate (p-2)! mod p, (p-3)! mod p, ..., (p-k)! mod p
    for (int i = 1; i <= k; ++i) {
        // Use (p - k + i) as the next number to divide by
        long long div = (p - i);
        
        // Calculate (p - k)! using Wilson's theorem
        factMod = (factMod * modInverse(div, p)) % p;
        
        cout << "(p-" << i + 1 << ")! mod " << p << " = " << factMod << endl;
    }
    
    return 0;
}
