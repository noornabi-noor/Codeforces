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


// void solve(){
//     string s;
//     cin>>s;
//     int w1=0,s1=0;
//     int n=s.size();
//     int r1=n/6;
//     int r2=n%6;
//     for(int i=0;i<s.size();i++){
       
//         if(s[i]=='W'){
//             w1++;
//         }
//         else{
//             s1+=s[i]-'0';
//         }
//     }
//     //cout<<r1<<"."<<r2<<" Overs "<<s1<<" Runs "<<w1<<" Wicket";
//     if(r1>=1 && r2>0){
//         cout<<r1<<"."<<r2<<" "<<"Overs"<<" ";
//     }
//     else{
//         cout<<r1<<"."<<r2<<" Over ";
//     }
//     if(s1>1){
//         cout<<s1<<" Runs ";
//     }
//     else{
//         cout<<s1<<" Run ";
//     }
//     if(w1>1){
//         cout<<w1<<" Wickets.";
//     }
//     else{
//         cout<<w1<<" Wicket.";
//     }
//     cout<<"\n";
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


// long long calculateK(int A, long long N) {
//     long long r = 0;
//     for (long long i = 1; i <= N; ++i) {
//         r += abs(i % A - i % (A - 1));
//     }
//     return r;
// }





// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         int A;
//         long long N;
//         cin >> A >> N;
//         long long result = calculateK(A, N);
//         cout << "Case " << t << ": " << result << "\n";
//     }
//     return 0;
// }



//#include <cstdio>