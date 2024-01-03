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
    if(n == 1)
    {
        cout << 1 <<"\n";
        return;
    }
 
    if(n & 1)
    {
        cout << -1 <<"\n";
        return;
    }
    int o = n-1, e = 2;
    a[1] = n;
    for(int i = 2; i<=n; i++)
    {
        if(i % 2 == 0)
        {
            a[i] = o;
            o -= 2;
        }
        else
        {
            a[i] = e;
            e+=2;
        }
    }
 
    for(int i = 1; i<=n; i++)cout << a[i] << " ";
    cout <<"\n";
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