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
    int v[n+5];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int ans = 1e18;
    for(int i=0; i<n; i++)
    {
        int mx = 0;
        int ans1=0;
        for(int j=i-1; j>=0; j--)
        {
            int x = v[j];
            if(x<mx)
            {
                ans1++;
                mx=-v[j];
            }
            else
            {
                int y = abs(mx);
                int z = y/x + 1;
                ans1+=z;
                mx=-(x*z);
            }
        }
        mx=0;
        for(int j=i+1; j<n; j++)
        {
            int x = v[j];
            if(x>mx)
            {
                ans1++;
                mx = v[j];
            }
            else
            {
                int z = mx/x + 1;
                ans1+=z;
                mx=x*z;
            }
        }
        ans = min(ans1,ans);
    }
    cout<<ans<<endl;
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

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
// #define BISMILLAH ios_base::sync_with_stdio(0);cin.tie(0);
// #define ALHAMDULILLAH return 0;
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


// void solve(){
//     ll n;
//     cin>>n;
//     ll ar[n+4];
//     for(ll i=0; i<n; i++)cin>>ar[i];
//     ll ans = 1e18;
//     for(ll i=0; i<n; i++)
//     {
//         ll mx = 0;
//         ll ans1=0;
//         for(ll j=i-1; j>=0; j--)
//         {
//             ll x = ar[j];
//             if(x<mx)
//             {
//                 ans1++;
//                 mx=-ar[j];
//             }
//             else
//             {
//                 ll y = abs(mx);
//                 ll z = y/x + 1;
//                 ans1+=z;
//                 mx=-(x*z);
//             }
//         }
//         mx=0;
//         for(ll j=i+1; j<n; j++)
//         {
//             ll x = ar[j];
//             if(x>mx)
//             {
//                 ans1++;
//                 mx = ar[j];
//             }
//             else
//             {
//                 ll z = mx/x + 1;
//                 ans1+=z;
//                 mx=x*z;
//             }
//         }
//         ans = min(ans1,ans);
//     }
//     cout<<ans<<endl;
// }

// int32_t main(){


//     BISMILLAH

//     int t=1;
//     //cin>>t;
//     while(t--){
//         solve();
//     }
//     ALHAMDULILLAH
// }