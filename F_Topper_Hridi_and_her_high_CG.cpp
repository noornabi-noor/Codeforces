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
const double pi = 3.14;

double gpa(int n) {
    int p[8] = {2, 3, 5, 7, 11, 13, 17, 19};

    double a = 1.68 + ((n - 1) * (pow(0.39, (n - 1))));

    int b_mod = 8 - n + 2;
    double b = (b_mod == 0) ? 0.000001 : p[n - 1] % b_mod;

    double c = a / b;

    double d = pow(2, c);

    double e = d - static_cast<int>(d);

    return e + pi;
}


void solve(){
    int n;
    cin>>n;
        
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += gpa(i);
    }

    double avg = s / n;
    double current_gpa = gpa(n);

    string ordinal;
    if (n == 1) ordinal = "st";
    else if (n == 2) ordinal = "nd";
    else if (n == 3) ordinal = "rd";
    else ordinal = "th";

    if (current_gpa >= avg) {
        cout << "Hridi is Happy with her"<<" "<< n << ordinal<<" "<< "semester result. That is:"<<" "<< fixed << setprecision(2) << current_gpa << "\n";
    } else {
        cout << "Hridi is Unhappy with her"<<" "<< n << ordinal<<" "<< "semester result. That is:" <<" "<< fixed << setprecision(2) << current_gpa << "\n";
    }

}

int32_t main(){
    BISMILLAH
    int te=1;
    //cin>>te;
    while(te--){
        solve();
    }
    ALHAMDULILLAH
}