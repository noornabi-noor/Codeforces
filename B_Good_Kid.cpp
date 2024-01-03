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
    int n,mn=INT_MAX,mul=1;
    cin>>n;
    vll v(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    sort(all(v));
    mul*=v[1]+1;
    for(int i=2;i<=n;i++){
        mul*=v[i];
    }
    cout<<mul<<'\n';
}

main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int te;
    cin>>te;
    while(te--){
        solve();
    }
    return 0;
}