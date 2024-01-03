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
    int n,f=-1,f1=0;
    cin>>n;
    vll v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n-2;i++){
        if(v[i]<v[i+1] && v[i+1]>v[i+2]){
                f=i;
                f1=1;
                break;
        }
        else{
            f1=0;
        }
    }
    if(f1){
        YES;
        cout<<f+1<<" "<<f+2<<" "<<f+3<<"\n";
    }
    else{
        NO;
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


// #include <iostream>
// #include <vector>

// #define YES std::cout << "YES" << std::endl
// #define NO std::cout << "NO" << std::endl

// typedef long long ll;
// typedef std::vector<ll> vll;

// void solve() {
//     int n, f = -1, f1 = 0;
//     std::cin >> n;
//     vll v(n);
//     for (int i = 0; i < n; i++) {
//         std::cin >> v[i];
//     }
//     for (int i = 0; i < n - 2; i++) {
//         if (v[i] < v[i + 1] && v[i + 1] > v[i + 2]) {
//             f = i;
//             f1 = 1;
//             break;
//         }
//     }
//     if (f1) {
//         YES;
//         std::cout << v[f] << " " << v[f + 1] << " " << v[f + 2] << "\n";
//     } else {
//         NO;
//     }
// }

// int main() {
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
