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


int robinDemand(int s, int n, vector<int>& a) {
    int l = 0, r = 1e12;
    int m = n * 2;

    int ans = -1;
    int avg, c = 0;
    int p = n / 2;

    if(n<=2){
        return -1;
    }

    while (l < r) {
        int mid = (l + r) / 2;
        int temp_s = s + mid;  

        if (temp_s % m != 0) {
            avg = (temp_s / m) + 1;
        } else {
            avg = temp_s / m;
        }

        c = 0;  
        for (int i = 0; i < n; i++) { 
            if (a[i] < avg) {
                c++;
            }
        }

        if (c > p) {
            ans = mid;
            r = mid ;
        } else {
            l = mid + 1;
        }
    }

    return ans;
}

void solve(){
    int n;
    cin>>n;

    vll v(n);
    int s=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
    }

    int res=robinDemand(s,n,v);
    cout<<res<<"\n";
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