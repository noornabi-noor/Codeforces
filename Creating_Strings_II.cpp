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


    //.........Code Start Here.........


int F[N+2];

int PreCalFacts(int n){
   int res=1;
   for(int i=1;i<=n;i++){
      res*=i;
      res%=mod;
      F[i]=res;
   }
   return res;
}

int mPow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int mDiv(int a, int b) {
    if (b == 0) {
        return 0; 
    }
    int inverseB = mPow(b, mod - 2);
    int result = (a % mod) * inverseB % mod;
    return (result + mod) % mod;
}


void solve(){
    int n;
    string s;
    cin>>s;
    n=s.size();
    map<int,int>mp;
    vll v;
    int r=PreCalFacts(n);
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto u:mp){
        v.pb(u.second);
    }
    int ans=r;
    for(int i=0;i<v.size();i++){
        ans=mDiv(ans,PreCalFacts(v[i]));
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