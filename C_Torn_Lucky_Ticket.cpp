// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int countLuckyPairs(vector<string> tickets) {
//     int count = 0;
//     for (int i = 0; i < tickets.size(); i++) {
//         for (int j = 0; j < tickets.size(); j++) {
//             if (i == j) {
//                 string concatenated = tickets[i] + tickets[j];
//                 if (concatenated.length() % 2 == 0) {
//                     int mid = concatenated.length() / 2;
//                     int sum1 = 0;
//                     int sum2 = 0;
//                     for (int k = 0; k < mid; k++) {
//                         sum1 += (int)(concatenated[k] - '0');
//                         sum2 += (int)(concatenated[k + mid] - '0');
//                     }
//                     if (sum1 == sum2) {
//                         count++;
//                     }
//                 }
//             } else {
//                 string concatenated = tickets[i] + tickets[j];
//                 if (concatenated.length() % 2 == 0) {
//                     int mid = concatenated.length() / 2;
//                     int sum1 = 0;
//                     int sum2 = 0;
//                     for (int k = 0; k < mid; k++) {
//                         sum1 += (int)(concatenated[k] - '0');
//                         sum2 += (int)(concatenated[k + mid] - '0');
//                     }
//                     if (sum1 == sum2) {
//                         count++;
//                     }
//                 }
//             }
//         }
//     }
//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
//     vector<string> tickets(n);
//     for (int i = 0; i < n; i++) {
//         cin >> tickets[i];
//     }
//     int result = countLuckyPairs(tickets);
//     cout << result << endl;
//     return 0;
// }


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

//     int LuckyPairs(vector<string> tickets) {
//     int count = 0;
//     for (int i = 0; i < tickets.size(); i++) {
//         for (int j = 0; j < tickets.size(); j++) {
//             if (i == j) {
//                 string concatenated = tickets[i] + tickets[j];
//                 if (concatenated.length() % 2 == 0) {
//                     int mid = concatenated.length() / 2;
//                     int sum1 = 0;
//                     int sum2 = 0;
//                     for (int k = 0; k < mid; k++) {
//                         sum1 += (int)(concatenated[k] - '0');
//                         sum2 += (int)(concatenated[k + mid] - '0');
//                     }
//                     if (sum1 == sum2) {
//                         count++;
//                     }
//                 }
//             } else {
//                 string concatenated = tickets[i] + tickets[j];
//                 if (concatenated.length() % 2 == 0) {
//                     int mid = concatenated.length() / 2;
//                     int sum1 = 0;
//                     int sum2 = 0;
//                     for (int k = 0; k < mid; k++) {
//                         sum1 += (int)(concatenated[k] - '0');
//                         sum2 += (int)(concatenated[k + mid] - '0');
//                     }
//                     if (sum1 == sum2) {
//                         count++;
//                     }
//                 }
//             }
//         }
//     }
//     return count;
// }

// void solve(){
//     int n;
//     cin >> n;
//     vector<string> ticket(n);
//     for (int i = 0; i < n; i++) {
//         cin >> ticket[i];
//     }
//     int result = LuckyPairs(ticket);
//     cout << result << '\n';
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

