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

int F[N+2];
 
int PreCalFacts(int N){
	int res=1;
	for(int i=1;i<=N;i++){
		res*=i;
		//res%=M;
		F[i]=res;
	}
    return res;
}

void solve(){
    int n,k;
    cin>>n>>k;
    int r=1;
    for(int i=0;i<k;i++){
        r=(r*n)%M;
    }
    cout<<r<<"\n";
}

int32_t main(){


    BISMILLAH

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}