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
    int n,s1=0,s2=0,s3,s4,s;
    cin>>n;
    vll a(n);
    vll b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    sort(all(a));
    int f1=a[0];
    for(int i=0;i<n;i++){
        cin>>b[i];
        s2+=b[i];
    }
    sort(all(b));
    int f2=b[0];
    cout<<min(f1*n+s2,f2*n+s1)<<"\n";
}

main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}