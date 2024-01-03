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
    int n,k,s=0,c=0,s1=0,c1=0;
    cin>>n>>k;
    vll v(n);
    vll v1(n);
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    int ans=0,j=0,mx=0;
	for(int i=0;i<n;i++){
		while(j<n&&(j<=i||v1[j-1]%v1[j]==0)&&ans+v[j]<=k){
			ans+=v[j];
			j++;
		}
		ans-=v[i];
		mx=max(mx,j-i);
	}	
    cout<<mx<<'\n';
    
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