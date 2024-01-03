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
    int a,b,n;
    cin>>a>>b>>n;
    vll v(n);
    int s=1;
    for(int i=0;i<n;i++){
        cin>>v[i]; 
        
    }
    int s1=0,c=0;
    for(int i=0;i<n;i++){
        
        if(v[i]<a){
            s1=v[i]+s1;
        }
        else{
            c++;
        }
        // else{
        //     s+=(a-1);
        // }
    }
    s1+=b;
    cout<<(s1-1)+c*(a-1)+1<<'\n';
    
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




