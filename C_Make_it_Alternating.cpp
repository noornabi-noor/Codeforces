#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 998244353
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

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1)%M;
}
void solve(){
    string s;
    cin>>s;
    int c=1,mo=0,di=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c=(c+1)%M;
        }
        else{
            mo=(mo+c-1)%M;
            di=(di*c)%M;
            c=1;
        }
    }
    cout<<mo%M<<" ";
    cout<<(di*fact(mo))%M<<"\n";
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