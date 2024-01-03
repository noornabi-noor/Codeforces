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

int s[2003],ans[2003];
void solve(){
        int n,x;
        cin>>n;
	    for(int i=1;i<=n;++i){
			cin>>x;
			s[x]=i;
		}
		for(int i=n;i>=1;--i){
			ans[i]=s[i]%i;
			for(int j=1;j<i;++j){
				s[j]=(s[j]+i-ans[i])%i;
			}
		}
		for(int i=1;i<=n;++i)cout<<ans[i]<<" ";
		cout<<"\n";	
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