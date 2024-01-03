// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define fi first
// #define se second
// #define pb push_back
// #define ppb pop_back
// #define lb lower_bound
// #define up upper_bound
// #define fo(i, a, b) for (int i = a; i <= b; i++)
// #define sort0(v) sort(all(v))
// #define vll vector<int>
// #define vvll vector<vector<int>>

// #define m 100000
// //.........Code Start Here.........

// bool prime[m];

// bool isPrime(int n) {
//     if (n < 2) return false;
//     if (n == 2) return true;
//     if (n % 2 == 0) return false;
//     return true;
// }

// void sieve(int n) {
//     for (int i = 3; i * i <= n; i += 2) {
//         if (isPrime(i)) {
//             for (int j = i * i; j <= n; j += i + i) {
//                 prime[j] = true;
//             }
//         }
//     }
// }

// void solve() {
//     int n;
//     cin >> n;

//     // Initialize the prime array with false values
//     for (int i = 0; i < m; i++) {
//         prime[i] = false;
//     }

//     // Call the sieve function to find primes up to n
//     sieve(n);

//     // Print the prime numbers up to n
//     for (int i = 2; i <= n; i++) {
//         if (!prime[i]) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

void sieve(int nu,int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (int i = nu; i <= n; ++i) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,nu;
        cin >> nu>>n;
        sieve(nu,n);
    }
    return 0;
}
