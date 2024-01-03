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
int n,m;
const int N=1e6+5;
int tree[N];

bool isWoodS(int hi){
    int wood=0;
    for(int i=0;i<n;i++){
        if(tree[i]>=hi){
            wood+=(tree[i]-hi);
        }
    }
    return wood>=m;
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    int l=0,h=1e9,mid;
    while(h-l>1){
        mid=(l+h)/2;
        if(isWoodS(mid)){
            l=mid;
        }
        else{
            h=mid-1;
        }
    }
    if(isWoodS(h)){
        cout<<h<<"\n";
    }
    else{
        cout<<l<<"\n";
    }
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