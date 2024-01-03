#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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

const int N=1e6+3;
void solve(){
    int n,m,x,y;
    cin>>n>>m;
    int v[N],s[N],s1[N];
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    int z=0;
    for(int i=2;i<=n;i++){
        s[i]=s[i-1]+ max(z,v[i-1]-v[i]);
    }
    for(int i=n-1;i;--i){
        s1[i]=s1[i+1]+max(z,v[i+1]-v[i]);
    }

    while(m--){
        cin>>x>>y;
        if(x<y){
            cout<<s[y]-s[x]<<"\n";
        }
        else{
            cout<<s1[y]-s1[x]<<"\n";
        }
    }
}

int32_t main(){


    BISMILLAH

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}