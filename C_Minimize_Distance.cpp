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


void solve(){
        int n,k,z;
	    int ans;
        cin>>n>>k;
        int a[n];
		ans=0;
		for(int i=0;i<n;i++)cin>>a[i];
		a[n]=0;
		sort(a,a+n+1);
		for(int i=0;i<=n;i++)if(a[i]==0){
			z=i;
			break;
		}
		for(int i=0;i<z;i+=k)ans-=a[i]*2;
		for(int i=n;i>z;i-=k)ans+=a[i]*2;
		ans-=max(a[n],-a[0]);
		cout<<ans<<"\n";
}

main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}