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
    int n;
    cin>>n;
    vll v(n);
    vll v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        v1[i]=i+1;
    }
    if(n<=1){
        cout<<"-1\n";
    }
    else{
        for(int i=0;i<n-1;i++){
            if(v[i]==v1[i]){
                swap(v1[i],v1[i+1]);
            }
        }
        if(v[n-1]==v1[n-1]){
            swap(v1[n-1],v1[n-2]);
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        cout<<"\n";
    }
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