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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    char c;
    map<char,bool>mp;
    for(int i=0;i<k;i++){
        cin>>c;
        mp[c]=true;
    }
    int ans=0,cnt=0;
    for(int i=0;i<n;i++){
        if(!mp[s[i]]){
            continue;
        }
        cnt++;
        if(i==n-1 || !mp[s[i+1]]){
            ans+=((cnt*(cnt+1))/2);
            cnt=0;
        }
    }
    cout<<ans<<"\n";
}

int32_t main(){


    BISMILLAH

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}