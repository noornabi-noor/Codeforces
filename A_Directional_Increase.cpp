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
    int n,mn=INT_MAX,pos;
    cin>>n;
    vll v(n);
    vll v1(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(v.size()>0 && v[v.size()-1]==0){
        v.pop_back();
    }
    if(v.size()==0){
        cout<<"Yes"<<endl;
    }
    else{
        int f=0;
        int sum=0;
        for(int i=v.size()-1; i>0; i--)
        {
            sum+=v[i];
            if(sum>=0){
                f=1;
                break;
            }
        }
        sum+=v[0];
        if(sum!=0)f=1;
        if(f==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
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