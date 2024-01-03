// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
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
//     int n,k;
//     cin>>n>>k;
//     k=n-k+1;
//     vll v(n);
//     lld s=0.0,s1=0.0;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         s+=v[i];
//     }
//     for(int i=1;i<n-1;i++){
//         s1+=v[i];
//     }
//     // lld res=;
//     cout << fixed << setprecision(10) << (s + s1) / k << "\n";
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



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
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

void solve(){
    int n, k,d;
    cin >> n >> k;
    d = n - k + 1;
    vll v(n+1); 
    ld s = 0.0, s1 = 0.0;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        v[i] += v[i-1];
    }
    for(int i = k; i <= n ; i++){
        s1 += v[i] - v[i-k];
    }
    cout << fixed << setprecision(10) << (s1) / d << "\n";
}

int32_t main(){
    BISMILLAH

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}
