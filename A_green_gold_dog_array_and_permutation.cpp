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
    vll a(n+1);
    pair<int,int>v[n];
    for(int i=1;i<=n;i++){
        cin>>v[i].first,v[i].second=i;
    }
    sort(v+1,v+1+n);
    for(int i=1;i<=n;i++){
        cout<<v[i].first<<" "<<v[i].second<<" ";
    }
    // for(int i=1;i<=n;i++){
    //     a[v[i].second]=n-i+1;
    // }
    // for(int i=1;i<=n;i++){
    //     cout<<a[i]<<' ';
    // }
    cout<<"\n";
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