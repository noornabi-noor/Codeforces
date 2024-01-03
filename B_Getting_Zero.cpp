#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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


void solve(){
    int n;
    cin>>n;
    //int res=1,c=0;
    //int i,tm=n;
    // while(tm<32768){
    //     tm=tm*2;
    //     c++;
    // }
    // cout<<tm<<" "<<c<<"\n";
    for(int i=1;i<=n;i++){
		int x,ans=3333;cin>>x;
		for(int j=0;j<=15;j++)
		for(int k=0;k<=15;k++)
			if(((x+j)<<k)%32768==0) ans=min(ans,j+k);
		cout<<ans<<" ";
	}
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}