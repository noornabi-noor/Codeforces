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
    int n,k,x,s=0;
    cin>>n>>k>>x;
    int mn=(k*(k+1))/2;
    int tm=n-k;
    int mx=(n*(n+1))/2 - (tm*(tm+1))/2;
    
    //cout<<mn<<" "<<mx<<"\n";

    if(x>=mn && x<=mx){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
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