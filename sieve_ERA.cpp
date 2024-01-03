#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

//#define M 1000000 // Increase the size of the prime array
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
const int mx=10000000000;
bool prime[mx];

// Corrected isPrime function
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    return !prime[n]; // Use ! to negate the value
}

void sieve(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = true; // Mark as composite
            }
        }
    }
    int c=0;
    for (int i = 2; i <= n; i++) {
        if (!prime[i]) {
            cout << i << " ";
            c++;
        }
    }
    cout<<"\n";
    cout << c << "\n";
}

void solve() {
    int n;
    cin >> n;
    sieve(n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
