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
    int n,m,f=1,f1=1;
    cin>>n>>m;
    string s,s1;
    cin>>s;
    cin>>s1;
    for(int i=1;i<m;i++){
        if(s1[i]==s1[i-1]){
            f=0;
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(s[i-1]==s1[0]||s[i]==s1[m-1]|| !f){
                f1=0;
            }
        }
    }
    if(f1==0){
        No;
    }
    else{
        Yes;
    }
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}