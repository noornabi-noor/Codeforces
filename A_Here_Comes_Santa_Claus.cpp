//  #include <bits/stdc++.h>
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


// void solve(){
//     int n;
//     cin>>n;
//     vector<ld>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     sort(all(v));
//     if(n>5 || n==4){
//         ld r1=(v[0]+v[1])/2;
//         ld r2=(v[n-1]+v[n-2])/2;
//         ld r=r2-r1;
//         cout<<setprecision(6)<<r<<"\n";
//     }
//     else if(n==5){
//         ld r3=(v[0]+v[1]+v[2])/3;
//         ld r4=(v[3]+v[4])/2;
//         ld rr=r4-r3;
//         cout<<setprecision(10)<<rr<<"\n";
//     }
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t=1;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//         cout<<"Case #"<<i<<": ";
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int Q;
        cin >> Q;

        vector<int> B(Q);
        for (int i = 0; i < Q; ++i) {
            cin >> B[i];
        }

        // Calculate the number of button presses needed to turn all buttons black
        int result = 0;

        // Initialize a variable to keep track of the state of each button (0 or 1)
        int current_state = 0;

        for (int i = 0; i < Q; ++i) {
            int press = B[i];

            // Toggle the state of the pressed button
            current_state ^= 1 << (press - 1);

            // If all buttons are black (current_state is all 1s), we reached the goal
            if (current_state == (1 << N) - 1) {
                result = i + 1; // i+1 button presses are needed to turn all black
                break;
            }
        }

        cout << "Case #" << t << ": " << result << endl;
    }

    return 0;
}
