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
    int n,m;
    cin>>n;
    string s;
    cin>>s;
    vector<char>v(9+1);
    for(int i=1;i<=9;i++){
        cin>>v[i];
    }

    // char mx=max(v[s[0]-'0'],v[s[3]-'0']);
    // cout<<mx<<" ";

    // for(int i=1;i<=9;i++){
    //     if(s[i-1]<=v[s[i-1]-'0']){
    //         s[i-1]=v[s[i-1]-'0'];
    //     }
    //     else{
    //         s[i-1]=s[i-1];
    //     }
    // }

    int i=1;
    while(s[i-1]>=v[s[i-1]-'0']&&i<=n){
        i++;
    }
    while(s[i-1]<=v[s[i-1]-'0']&&i<=n){
       s[i-1]=v[s[i-1]-'0'];
       i++;
    }
    cout<<s<<"\n";
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