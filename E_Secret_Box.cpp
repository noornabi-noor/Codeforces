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

    int k,z,X,Y,Z;
    cin>>X>>Y>>Z>>k;
        int ans=0;
        for(int x=1;x<=X;x++){
            for(int y=1;y<=Y;y++){
                z=k/(x*y);
                if(x*y>k || k%(x*y) || z>Z) continue;
                ans=max(ans,((X+1-x)*(Y+1-y)*(Z+1-z)));
            }
        }
        cout<<ans<<'\n';

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



// #include <bits/stdc++.h>
// using namespace std;


// int main(){

//     // int t;
//     // cin>>t;
//     // while(t--){
//     //     int x, y, z, k;
//     //     cin >> x >> y >> z >> k;

//     //     int ans = 0;
//     //     for (int i = 1; i <= x; i++) {
//     //         for (int j = 1; j <= y; j++) {
//     //             int Z = k / (x * y);
//     //             if (x * y <= k && k % (x * y) == 0 && Z <= z) {
//     //                 ans = max(ans, ((x + 1 - i) * (y + 1 - j) * (z + 1 - Z)));
//     //             }
//     //         }
//     //     }

//     //     cout << ans << "\n";
//     // }

//     int i,j,k,m,n,c,t,x,y,z,X,Y,Z;
//     cin>>t;
//     while(t--){
//         cin>>X>>Y>>Z>>k;
//         int ans=0;
//         for(x=1;x<=X;x++){
//             for(y=1;y<=Y;y++){
//                 if(x*y>k)continue;
//                 if(k%(x*y))continue;
//                 z=k/(x*y);
//                 if(z>Z)continue;
//                 c=(X+1-x)*(Y+1-y)*(Z+1-z);
//                 ans=max(ans,c);
//             }
//         }
//         cout<<ans<<'\n';
//     return 0;
//     }
// }


// #include<bits/stdc++.h>
// using  namespace std;
// #define fast {ios_base::sync_with_stdio(false); cin.tie(0);}
// typedef long long ll;

// int main()
// {
//     fast
//     ll i,j,k,m,n,c,t,x,y,z,X,Y,Z;
//     cin>>t;
//     while(t--){
//         cin>>X>>Y>>Z>>k;
//         ll ans=0;
//         for(x=1;x<=X;x++){
//             for(y=1;y<=Y;y++){
//                 if(x*y>k)continue;
//                 if(k%(x*y))continue;
//                 z=k/(x*y);
//                 if(z>Z)continue;
//                 c=(X+1-x)*(Y+1-y)*(Z+1-z);
//                 ans=max(ans,c);
//             }
//         }
//         cout<<ans<<'\n';
//     }
// }
