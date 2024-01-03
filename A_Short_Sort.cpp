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
        char ch[4];
        for(int i=1;i<=3;i++){
            cin>>ch[i];
        }
        if((ch[1]=='a' && ch[2]=='b' && ch[3]=='c') || (ch[1]=='a' && ch[2]=='c' && ch[3]=='b') || (ch[1]=='c' && ch[2]=='b' && ch[3]=='a') || (ch[1]=='b' && ch[2]=='a' && ch[3]=='c')){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }            
}

main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int te;
    cin>>te;
    while(te--){
        solve();
    }
    return 0;
}