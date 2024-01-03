// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
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
//     int w,h;
//     cin>>w>>h;
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

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long w, h;
        cin >> w >> h;

        // Calculate the minimum number of cameras needed
        // Cameras should cover all rows and columns, so we divide by 2
        // Use integer division and add 1 to handle odd dimensions
        long long cameras = (w / 2) * (h / 2);

        // If either dimension is odd, add one more camera for the remaining row/column
        if (w % 2 != 0) {
            cameras += (h + 1) / 2;
        }

        if (h % 2 != 0) {
            cameras += (w + 1) / 2;
        }

        cout << cameras << endl;
    }

    return 0;
}

