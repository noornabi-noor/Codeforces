#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define mod 998244353
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

int fact1(int k) {
    if (k==0) return 1%mod;
    int res=fact1(k/2)%mod;
    if (k%2) return ((((res%mod)*(res%mod))%mod)*2)%mod;
    else return (((res%mod)*(res%mod))%mod);
}

int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
int fact(int a) { if(a==0 || a==1){return 1;} return a*fact(a-1); }
int nCr(int n,int r){if(r>n){return 0;} return fact(n)/(fact(r)*fact(n-r));}
int nPr(int n,int r){if(r>n){return 0;} return fact(n)/(fact(n-r));}


    //.........Code Start Here.........


void solve(){
    int n;
    cin>>n;
    vll v(n+1);
    vll mx(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            mx[i]=max(mx[i],v[j]);
        }
    }
    sort(all(mx));
    int ans=0;
    for(int i=1;i<=n;i++){
        ans+=(mx[i]*fact1(i-1))%mod;
    }
    cout<<ans%mod;
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