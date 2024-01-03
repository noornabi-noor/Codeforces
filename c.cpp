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
    char ch[15][15];
    int c=0;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            cin>>ch[i][j];
        }
    }
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            if(ch[i][j]=='X'){
                if(i<=5){
                    if(j<=5){
                        c+=min(i,j);
                    }
                    else{
                        c+=min(i,11-j);
                    }
                }
                else{
                    if(j<=5){
                        c+=min(11-i,j);
                    }
                    else{
                        c+=min(11-i,11-j);
                    }
                }
            }
        }
    }
    cout<<c<<"\n";
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