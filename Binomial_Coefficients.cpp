#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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

int BE(int x,int y){
    int res=1;
    while(y){
        if(y&1){
            res=(res*x)%M;
        }
        y>>=1;
        x=(x*x)%M;
    }
    return res;
}

int F[N+2];

void PreCalFacts(){
	int res=1;
	for(int i=1;i<=N;i++){
		res*=i;
		res%=M;
		F[i]=res;
	}
}

int nCr(int n,int r){
	if(r>=n)return 0LL;
	

	int x=F[n];
	int y=(F[r]%M*F[n-r]%M)%M;

	y = BE(y,M-2);

	int ans=(x%M * y%M)%M;

	return ans;

}

int nPr(int n,int r){
	if(r>=n)return 0LL;
	

	int x=F[n];
	int y=(F[n-r]%M)%M;

	y = BE(y,M-2);

	int ans=(x%M * y%M)%M;

	return ans;

}

void solve(){
    int n,m;
    cin>>n>>m;
    if(n==1 && m==0){
        cout<<"1\n";
    }
    else{
        cout<<nCr(n,m)<<"\n";
    }
    
}

int32_t main(){


    BISMILLAH
    PreCalFacts();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}