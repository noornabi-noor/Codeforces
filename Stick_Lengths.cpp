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

const int MAXN = 200005; 

int n, median;
int p[MAXN]; 
int ans, cnt;

    //.........Code Start Here.........


void solve(){
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    sort(p, p + n);
    median = p[n / 2];
    cout<<median<<"\n";
    // for (int i = 0; i < n; i++) {
    //     ans += abs(median - p[i]);
    // }
    // cout << ans << "\n";
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