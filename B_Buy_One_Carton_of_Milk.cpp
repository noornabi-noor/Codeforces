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
void SieveOfEratosthenes(int n, bool prime[],bool primesquare[], int a[]){ for (int i = 2; i <= n; i++) prime[i] = true; for (int i = 0; i <= (n * n + 1); i++) primesquare[i] = false; prime[1] = false; for (int p = 2; p * p <= n; p++) { if (prime[p] == true) { for (int i = p * p; i <= n; i += p) prime[i] = false;}} int j = 0;for (int p = 2; p <= n; p++) {if (prime[p]){   a[j] = p; primesquare[p * p] = true; j++; } } }
int countDivisors(int n){ if (n == 1) return 1; bool prime[n + 1], primesquare[n * n + 1]; int a[n]; SieveOfEratosthenes(n, prime, primesquare, a); int ans = 1; for (int i = 0;; i++) {if (a[i] * a[i] * a[i] > n) break; int cnt = 1; while (n % a[i] == 0) { n = n / a[i]; cnt = cnt + 1;}ans = ans * cnt;} if (prime[n]) ans = ans * 2; else if (primesquare[n]) ans = ans * 3; else if (n != 1) ans = ans * 4;return ans;}


    //.........Code Start Here.........


void solve(){
    int n,s,m,l;
    cin>>n>>s>>m>>l;
    int ans=INT_MAX;
    for(int i=0;i<=100;i++){
        for(int j=0;j<=100;j++){
            for(int k=0;k<=100;k++){
                if(i*6 + j*8 + k*12>=n){
                    ans=min(ans,i*s + j*m + k*l);
                }
            }
        }
    }
    cout<<ans<<"\n";
}

int32_t main(){


    BISMILLAH

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}