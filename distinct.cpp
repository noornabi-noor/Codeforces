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

                             // 1 2 2 1 3 1 1 3
void solve(){
    int a[]={1,2,2,1,3,1,1,3};
    int n=8,k=4;
    map<int,int>mp;
    for(int i=0;i<k;i++){
        mp[a[i]++];
    }
    cout<<mp.size();
    for(int i=k;i<n;i++){
        if(mp.at(a[i-k]==1)){
            mp.erase(a[i-k]);
        }
        else{
            mp[a[i-k]-1];
        }
        mp[a[i]++];
        cout<<mp.size();
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