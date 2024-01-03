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
    int te=0;
    
    string s;
    cin>>s;
    int n=s.size();
    auto mx1=s,mn1=s;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i>0 || s[j]!='0'){
                swap(s[i],s[j]);
                mn1=min(mn1,s);
                mx1=max(mx1,s);
                swap(s[i],s[j]);
            }
        }
    }
    cout<<mn1<<" "<<mx1<<"\n";
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}