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
    int f=0;
    string s,s1;
    cin>>s>>s1;
    for(int i=0;i<s.size();i++){
        if((s[i]=='0' && s1[i]=='0') && (s[i+1]=='1' && s1[i+1]=='1')){
            f=1;
        }
    }
    if(f){
        YES;
    }
    else{
        NO;
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