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
    int n,x=-1,z=0,f=0,d=0,y=0;
    cin>>n;
    int a[n][5];
    for(int i=0;i<n;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    for(int i=0;i<5;i++)
        {
        for(int j=i+1;j<5;j++)
        {
            z=0,d=0,y=0;
        for(int k=0;k<n;k++)
            {
                z+=(!a[k][i]&&!a[k][j]);d+=(a[k][i]>0);y+=(a[k][j]>0);
                }
            f+=(d>=n/2&&y>=n/2&&!z);
        }
    }
    cout<<(f>0?"YES\n":"NO\n");
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