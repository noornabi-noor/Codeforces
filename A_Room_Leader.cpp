#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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


void solve(){
    int t,mx=INT_MIN,r,f=0;
    int p,m,a,b,c,d,e;
    string s,g;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s>>p>>m>>a>>b>>c>>d>>e;
        r=a+b+c+d+e+(100*p)-(50*m);
        mx=max(mx,r);
        if(mx==r){
            g=s;
        }   
    }
    cout<<g;
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


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 


// int main() {
//     ll t,mx=INT_MIN,r,f=0;
//     ll p,m,a,b,c,d,e;
//     string s,g;
//     cin>>t;
//     for(ll i=0;i<t;i++){
//         cin>>s>>p>>m>>a>>b>>c>>d>>e;
//         r=a+b+c+d+e+(100*p)-(50*m);
//         mx=max(mx,r);
//         if(mx==r){
//             g=s;
//         }   
//     }
//     cout<<g;
    
//   return 0;
// }