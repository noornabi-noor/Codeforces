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

// int countTeams(const vector<int>& energies) {
//     int n = energies.size();
//     long long count = 0;

    
//     for (int mask = 1; mask < (1 << n); mask++) { 
//         long long total_energy = 0;
//         int team_size = 0;

//         for (int i = 0; i < n; i++) {
//             if (mask & (1 << i)) { 
//                 total_energy += energies[i];
//                 team_size++;
//             }
//         }

        
//         if (total_energy % team_size == 0) {
//             count = (count + 1) % mod; 
//         }
//     }

//     return count;
// }

int countTeams(const vector<int>& energies) {
    int n = energies.size();
    long long count = 0;

    for (int mask = 1; mask < (1 << n); mask++) { 
        long long total_energy = 0;
        int team_size = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) { 
                total_energy += energies[i];
                team_size++;
            }
        }

        if (team_size > 0 && total_energy % team_size == 0) {
            count = mod_add(count,1); 
        }
    }

    return count;
}


void solve(){
    int n;
    cin>>n;

    vector<int> energies(n);

    for(int i=0;i<n;i++){
        cin>>energies[i];
    }

    int result = countTeams(energies);
    cout << result << endl;
}

int32_t main(){
    BISMILLAH
    int te;
    cin>>te;
    
    
    for(int i=1;i<=te;i++){
        cout<<"Case "<<i<<": ";
        solve();
    }
    ALHAMDULILLAH
}








// #include <iostream>
// #include <vector>

// using namespace std;

// const int MOD = 1e9 + 7;

// // Function to calculate the number of ways to form teams
// int countTeams(const vector<int>& energies) {
//     int n = energies.size();
//     long long total_count = 0;

//     // Iterate through all possible combinations of Orcs
//     for (int mask = 1; mask < (1 << n); mask++) { // from 1 to 2^n - 1
//         long long total_energy = 0;
//         int team_size = 0;

//         for (int i = 0; i < n; i++) {
//             if (mask & (1 << i)) { // if the i-th Orc is included
//                 total_energy += energies[i];
//                 team_size++;
//             }
//         }

//         // Check if total energy is divisible by team size
//         if (total_energy % team_size == 0) {
//             total_count = (total_count + 1) % MOD; // Keep count mod 10^9 + 7
//         }
//     }

//     return total_count;
// }

// int main() {
//     // Given sample input
//     vector<int> energies = {1, 2, 2, 1, 0, 1, 1};
//     int result = countTeams(energies);
    
//     cout << "Total number of ways to form a team: " << result << endl;
//     return 0;
// }
