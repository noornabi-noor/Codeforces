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
//     int n,k;
//     cin>>n>>k;

//     int d,x,y;
//     cin>>d>>x>>y;

//     double l=d/x,r=d/y;

//     while(l<r){
//         double mid=(l+r)/2;


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



#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function to check if all swimmers can cross within given time T
bool canAllSwimmersCross(long long N, long long K, long long D, long long X, long long Y, double T) {
    // Time for a single swimmer to swim across
    double swimTime = D / (double)X;
    // Time for a boat to make a one-way trip across the river
    double boatTime = D / (double)Y;
    // Maximum trips each boat can make within time T
    long long tripsPerBoat = static_cast<long long>(T / boatTime);

    // Maximum number of swimmers who can use boats
    long long maxSwimmersByBoat = min(N, K * tripsPerBoat);

    // Remaining swimmers who will need to swim if not enough boat trips
    long long remainingSwimmers = N - maxSwimmersByBoat;

    // Check if the remaining swimmers can swim within time T
    return remainingSwimmers * swimTime <= T;
}

// Function to perform binary search to find the minimum time required for all swimmers to cross
double minTimeToCross(long long N, long long K, long long D, long long X, long long Y) {
    // Lower bound: time for a boat to cross once
    double low = D / (double)Y;
    // Upper bound: time if all swimmers swim independently
    double high = D / (double)X * N;
    double result = high;

    // Binary search for minimum time
    while (high - low > 1e-6) {
        double mid = (low + high) / 2.0;
        if (canAllSwimmersCross(N, K, D, X, Y, mid)) {
            result = mid;  // Update result if feasible
            high = mid;    // Try for a smaller time
        } else {
            low = mid;     // Increase the time
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;
    cout << fixed << setprecision(10);

    while (T--) {
        long long N, K, D, X, Y;
        cin >> N >> K >> D >> X >> Y;
        cout << minTimeToCross(N, K, D, X, Y) << endl;
    }

    return 0;
}
