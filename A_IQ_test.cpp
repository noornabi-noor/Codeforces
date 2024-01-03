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
    int n;
    cin>>n;
    vll v(n+1);
    int c1=0,c2=0;
    int res1,res2;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        if(v[i]%2!=0){
            c1++;
            res1=i;
        }
        else{
            c2++;
            res2=i;
        }
    }
    if(c1<c2){
        cout<<res1<<"\n";
    }
    else{
        cout<<res2<<"\n";
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