#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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
int i,j,k,n,m,t,l[1005000],r[1005000],x,y,res[1005000];

void solve(){
        cin>>n>>m;
		for(i=1;i<=m;i++)l[i]=r[i]=0;
		for(i=1;i<=n;i++){
			cin>>k;
			if(!l[k])l[k]=i;
			r[k]=i;
		}
		x=n;y=1;
		for(i=m;i>=1;i--){
			if(!l[i])res[i]=0;
			else {
				x=min(x,l[i]);y=max(y,r[i]);
				res[i]=2*(y-x+1);
			}
		}
		for(i=1;i<=m;i++)cout<<res[i]<<' ';
		cout<<'\n';
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}