#include <bits/stdc++.h>
using namespace std;

//#define int long long
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
int get(int a,int b){
	int x=1<<b,y=1<<(b-1);
	return a/x*y+max(a%x-y,0);
}

void solve(){
    int n,m,c1=0,c2=0,ans=0;
    cin>>n>>m;
    for(int i=1;i<=18;i++){
			int x=get(n,i),y=get(m+1,i);
			ans=max(y-x,ans);
		}
		cout<<m-n+1-ans<<"\n";
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