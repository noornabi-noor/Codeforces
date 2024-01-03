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
    vector<string>s[3];
    map<string,int>mp;
    for(int i=0;i<3;i++){
        s[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>s[i][j];
            mp[s[i][j]]++;
        }
    }
    int perS[3]={0};
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            if(mp[s[i][j]]==1){
                perS[i]+=3;
            }
            else if(mp[s[i][j]]==2){
                perS[i]+=1;
            }
        }
    }
    cout<<perS[0]<<" "<<perS[1]<<" "<<perS[2]<<" "<<"\n";
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