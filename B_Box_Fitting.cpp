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
    int n,m,c=0;
    cin>>n>>m;
    vll v(n);
    vll v1;
    multiset<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }

    // for(auto u:s){
    //     cout<<u<<" ";
    // }
    // cout<<"\n";

    int h=1;
    int left = m;
    while(!s.empty()){
        auto it = s.up(left);
        if(it==s.begin()){
            left=m;
            h++;
        }
        else{
            it--;
            int val = *it;
            left-=val;
            s.erase(it);
        }
    }
    cout<<h<<endl;
    
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