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
    int n;
    cin>>n;
    int odd=1,even=2,on=0,en=0,ans1=0,ans2=0;
    for(int i=1;i<=n;i++){
    int a;
    cin>>a;
    if(a&1) {
        ans1+=abs(odd-i);ans2+=abs(even-i);
        on++;
        odd+=2;
        even+=2;
    }
    else en++;
    }
    if(on==en+1) cout<<ans1<<endl;
    else if(on+1==en) cout<<ans2<<endl;
    else if(on==en) cout<<min(ans1,ans2)<<endl;
    else cout<<-1<<endl;
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