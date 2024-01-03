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

int maxSum(vll a,int n){
    int curs=0;
    int mxs=INT_MIN;
    for(int i=0;i<n;i++){
        curs+=a[i];
        if(curs>mxs){
            mxs=curs;
        }
        if(curs<0){
            curs=0;
        }
    }
    return mxs;
}

void solve(){
    int n,mx;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int res=maxSum(v,n);
    
    cout<<res<<"\n";
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