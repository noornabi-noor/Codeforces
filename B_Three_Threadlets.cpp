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
    int a,b,c,cn=0,f=1;
    cin>>a>>b>>c;
    int mn=min(a,b);
    int n=min(mn,c);
    if(a%n!=0 || b%n!=0 || c%n!=0){
        f=0;
    }
    while(a!=n){
        if(a%n!=0 || cn>3){
            f=0;
            break;
        }
        cn++;
        a=a-n;
    }
    while(b!=n){
        if(b%n!=00 || cn>3){
            f=0;
            break;
        }
        cn++;
        b=b-n;
    }
    while(c!=n){
        if(c%n!=00 || cn>3){
            f=0;
            break;
        }
        cn++;
        c=c-n;
    }
    if(cn>3){
        f=0;
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