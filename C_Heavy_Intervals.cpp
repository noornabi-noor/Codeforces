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

void solve(){
    int n;
    cin>>n;
    vll a(n),b(n),c(n),d(n),e(n),f(n),g(n),h(n),m(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        //d[i]=a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        //e[i]=b[i];
    }

    for(int i=0;i<n;i++){
        cin>>c[i];
       // f[i]=c[i];
    }

    sort(all(a));
    sort(rall(b));
    sort(all(c));

    int s=0;
    for(int i=0;i<n;i++){
        s+=(c[i]*abs(a[i]-b[i]));
    }
    cout<<s<<"\n";


    // sort(rall(a));
    // sort(rall(b));
    // sort(rall(c));


    // int s=0;
    // for(int i=0;i<n;i++){
    //     s+=(c[i]*abs(a[i]-b[i]));
    // }
    // cout<<s<<"\n";
    
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


// 5
// 81217 81570 20439 46555 23390
// 160683 176054 160994 97805 184462
//9 3 1 8 4
//1861614


// 5
// 80889 65089 43926 36781 96985
// 183450 89936 173484 66117 105658
// 4 6 10 10 9
//1542457


// 6
// 113018 116292 14692 176898 138556 9177
// 170812 156337 62236 183867 151590 113678
//5 2 10 9 7 10
//1034901


// 10
// 76042 155685 62534 162770 779 3495 97453 122787 86743 142857
// 81292 172088 146526 199306 36432 165338 168285 127772 119677 151891
//1 8 2 9 1 1 1 4 7 4
//609373

