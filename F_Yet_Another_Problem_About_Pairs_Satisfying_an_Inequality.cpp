// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
// #define YES cout << "YES" << '\n'
// #define Yes cout << "Yes" << '\n'
// #define yes cout << "yes" << '\n'
// #define NO cout << "NO" << '\n'
// #define No cout << "No" << '\n'
// #define no cout << "no" << '\n'
// #define all(x) (x).begin(),(x).end()
// #define rall(x) (x).rbegin(),(x).rend()
// #define fi first
// #define se second
// #define pb push_back
// #define ppb pop_back
// #define lb lower_bound
// #define up upper_bound
// #define fo(i,a,b) for(int i=a; i<=b; i++)
// #define sort0(v) sort(all(v))
// #define vll vector<int>
// #define vvll vector<vector<int>>


//     //.........Code Start Here.........

// int64_t s[200007],n,i,ans,x;
// void solve(){
//     cin>>n;
//     ans=0;
//     for(i=1;i<=n;i++){
//         cin>>x;
//         s[i]=s[i-1]+(x<i);
//         (x<i)?ans+=s[x-1]:7;
//     }
//     cout<<ans<<'\n';
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int64_t s[200007],n,t,i,ans,x;
main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        for(i=1;i<=n;i++)cin>>x,s[i]=s[i-1]+(x<i),(x<i)?ans+=s[x-1]:7;
        cout<<ans<<'\n';
    }
}
