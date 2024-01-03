#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
ll BE(ll x,ll y){
    ll res=1;
    while(y){
        if(y&1){
            res=(res*x)%mod;
        }
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

ll F[N+2];

void PreCalFacts(){
	ll res=1;
	for(ll i=1;i<=N;i++){
		res*=i;
		res%=mod;
		F[i]=res;
	}
}

// ll nCr(ll n,ll r){
// 	if(r>=n)return 0LL;
// 	ll x=F[n];
// 	ll y=(F[r]%mod*F[n-r]%mod)%mod;
// 	y = BE(y,mod-2);
// 	ll ans=(x%mod * y%mod)%mod;
// 	return ans;
// }

ll nCr(ll N, ll r) {
    if (r == 0) return 1;
    return nCr(N, r - 1) * (N - r + 1) / r;
}

ll nPr(ll n,ll r){
	if(r>=n)return 0LL;
	ll x=F[n];
	ll y=(F[n-r]%mod)%mod;
	y = BE(y,mod-2);
	ll ans=(x%mod * y%mod)%mod;
	return ans;
}

void solve(){
    ll n;
    cin>>n;
    ll ans=nCr(n,5)+nCr(n,6)+nCr(n,7);
    cout<<ans;
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