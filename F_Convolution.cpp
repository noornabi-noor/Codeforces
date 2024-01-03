// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define mod 998244353
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


//     //.........Code Start Here.........
// vector<int> convolution(const vector<int>& a, const vector<int>& b) {
//     int n = a.size();
//     int m = b.size();
//     int resultSize = n + m - 1;
//     vector<int> c(resultSize, 0);

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             c[i + j] = (c[i + j] + 1LL * a[i] * b[j]) % mod;
//         }
//     }

//     return c;
// }


// void solve(){
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N);
//     vector<int> b(M);

//     for (int i = 0; i < N; ++i) {
//         cin >> a[i];
//     }

//     for (int i = 0; i < M; ++i) {
//         cin >> b[i];
//     }

//     vector<int> result = convolution(a, b);

//     for (int i = 0; i < result.size(); ++i) {
//         cout << result[i] << " ";
//     }
// }

// int32_t main(){


//     BISMILLAH

//     int t=1;
//     //cin>>t;
//     while(t--){
//         solve();
//     }
//     ALHAMDULILLAH
// }


// #include <bits/stdc++.h>
// using namespace std;
// #include <iostream>
// #include <vector>
// #include <complex>
// #include <cmath>
// #include <boost/multiprecision/cpp_int.hpp>
// #include <boost/multiprecision/complex.hpp>
// #include <boost/math/constants/constants.hpp>

// using namespace std;
// namespace mp = boost::multiprecision;

// const int MOD = 998244353;
// const double PI = boost::math::constants::pi<double>();

// using Complex = mp::complex<mp::cpp_int>;

// vector<Complex> fft(const vector<Complex>& a, bool invert) {
//     int n = a.size();
//     if (n == 1) {
//         return vector<Complex>{a[0]};
//     }

//     vector<Complex> a0(n / 2), a1(n / 2);
//     for (int i = 0, j = 0; i < n; i += 2, ++j) {
//         a0[j] = a[i];
//         a1[j] = a[i + 1];
//     }

//     vector<Complex> y0 = fft(a0, invert);
//     vector<Complex> y1 = fft(a1, invert);

//     double ang = 2 * PI / n * (invert ? -1 : 1);
//     Complex w(1), wn(cos(ang), sin(ang));

//     for (int k = 0; k < n / 2; ++k) {
//         a[k] = y0[k] + w * y1[k];
//         a[k + n / 2] = y0[k] - w * y1[k];
//         if (invert) {
//             a[k] /= 2;
//             a[k + n / 2] /= 2;
//         }
//         w *= wn;
//     }

//     return a;
// }

// vector<Complex> multiply(const vector<int>& a, const vector<int>& b) {
//     int n = 1;
//     while (n < max(a.size(), b.size())) {
//         n <<= 1;
//     }
//     n <<= 1;

//     vector<Complex> fa(a.begin(), a.end());
//     fa.resize(n, 0);
//     fft(fa, false);

//     vector<Complex> fb(b.begin(), b.end());
//     fb.resize(n, 0);
//     fft(fb, false);

//     for (int i = 0; i < n; ++i) {
//         fa[i] *= fb[i];
//     }

//     fft(fa, true);

//     vector<int> result(n);
//     for (int i = 0; i < n; ++i) {
//         result[i] = static_cast<int>(fa[i].real() + 0.5) % MOD;
//     }

//     return result;
// }

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<int> a(N);
//     vector<int> b(M);

//     for (int i = 0; i < N; ++i) {
//         cin >> a[i];
//     }

//     for (int i = 0; i < M; ++i) {
//         cin >> b[i];
//     }

//     vector<int> result = multiply(a, b);

//     for (int i = 0; i < result.size(); ++i) {
//         cout << result[i] << " ";
//     }

//     return 0;
// }


