#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
#define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
#define ALHAMDULILLAH return 0;
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
    int n,mx=INT_MIN,mn=INT_MAX,mx1=INT_MIN,mn1=INT_MAX,s;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mx=max(mx,v[i]);
        mn=min(mn,v[i]);
    }
    s=mx-mn;
    //cout<<mx<<" "<<mn<<"\n";
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (mx == *it) {
            v.erase(it);
            break;
        }
        // if(mn == *it){
        //     v.erase(it);
        //     break;
        // }
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        // if (mx == *it) {
        //     v.erase(it);
        //     break;
        // }
        if(mn == *it){
            v.erase(it);
            break;
        }
    }
    for(int i=0;i<v.size();i++){
        mx1=max(mx1,v[i]);
        mn1=min(mn1,v[i]);
        //cout<<v[i]<<" ";   
    }
    //cout<<"\n";
    //cout<<mx1<<" "<<mn1<<"\n";
    cout<<s+(mx1-mn1)<<"\n";
}

int32_t main(){


    BISMILLAH

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}