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

// void SieveOfEratosthenes(int n) 
// { 
//     bool prime[n + 1]; 
//     memset(prime, true, sizeof(prime)); 
  
//     for (int p = 2; p * p <= n; p++) { 
         
//         if (prime[p] == true) { 
//             for (int i = p * p; i <= n; i += p) 
//                 prime[i] = false; 
//         } 
//     } 

//     for (int p = 2; p <= n; p++) 
//         if (prime[p]) 
//             cout << p << " "; 
// } 


// void solve(){
//     int n,k;
//     cin>>n>>k;
//     vll v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//         SieveOfEratosthenes(v[i]);
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


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int longestSubarray(vector<int> &A, int K) {
//     int n = A.size();
//     vector<int> prefixCount(n + 1, 0);
//     unordered_map<int, int> factorsCount;
//     int left = 0, maxLen = 0, almostPrime = 0;

//     for (int right = 0; right < n; ++right) {
//         int num = A[right];
//         unordered_map<int, int> localFactors;
//         for (int i = 2; i * i <= num; ++i) {
//             while (num % i == 0) {
//                 localFactors[i]++;
//                 if (localFactors[i] == 1) {
//                     factorsCount[i]++;
//                     if (factorsCount[i] == 1) {
//                         almostPrime++;
//                     }
//                 }
//                 num /= i;
//             }
//         }
//         if (num > 1) {
//             localFactors[num]++;
//             factorsCount[num]++;
//             if (localFactors[num] == 1) {
//                 almostPrime++;
//             }
//         }

//         prefixCount[right + 1] = almostPrime;

//         while (almostPrime > K || (almostPrime > 0 && prefixCount[right + 1] - prefixCount[left] > K)) {
//             int leftNum = A[left++];
//             for (int i = 2; i * i <= leftNum; ++i) {
//                 while (leftNum % i == 0) {
//                     if (factorsCount[i] == 1) {
//                         almostPrime--;
//                     }
//                     factorsCount[i]--;
//                     leftNum /= i;
//                 }
//             }
//             if (leftNum > 1) {
//                 if (factorsCount[leftNum] == 1) {
//                     almostPrime--;
//                 }
//                 factorsCount[leftNum]--;
//             }
//         }
//         maxLen = max(maxLen, right - left + 1);
//     }
//     return maxLen;
// }

// int main() {
//     int T;
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         int N, K;
//         cin >> N >> K;
//         vector<int> A(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }
//         int result = longestSubarray(A, K);
//         cout << "Case " << t << ": " << result << endl;
//     }
//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int longestSubarray(vector<int> &A, int K) {
//     int n = A.size();
//     vector<int> prefixCount(n + 1, 0);
//     unordered_map<int, int> factorsCount;
//     int left = 0, maxLen = 0, almostPrime = 0;

//     for (int right = 0; right < n; ++right) {
//         int num = A[right];
//         unordered_map<int, int> localFactors;
//         for (int i = 2; i * i <= num; ++i) {
//             while (num % i == 0) {
//                 localFactors[i]++;
//                 if (localFactors[i] == 1) {
//                     if (++factorsCount[i] == 1) {
//                         almostPrime++;
//                     }
//                 }
//                 num /= i;
//             }
//         }
//         if (num > 1) {
//             localFactors[num]++;
//             if (++factorsCount[num] == 1) {
//                 almostPrime++;
//             }
//         }

//         prefixCount[right + 1] = almostPrime;

//         while (almostPrime > K || (almostPrime > 0 && prefixCount[right + 1] - prefixCount[left] > K)) {
//             int leftNum = A[left++];
//             for (int i = 2; i * i <= leftNum; ++i) {
//                 while (leftNum % i == 0) {
//                     if (--factorsCount[i] == 0) {
//                         almostPrime--;
//                     }
//                     leftNum /= i;
//                 }
//             }
//             if (leftNum > 1) {
//                 if (--factorsCount[leftNum] == 0) {
//                     almostPrime--;
//                 }
//             }
//         }
//         maxLen = max(maxLen, right - left + 1);
//     }
//     return maxLen;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     for (int t = 1; t <= T; t++) {
//         int N, K;
//         cin >> N >> K;
//         vector<int> A(N);
//         for (int i = 0; i < N; i++) {
//             cin >> A[i];
//         }
//         int result = longestSubarray(A, K);
//         cout << "Case " << t << ": " << result << "\n";
//     }
//     return 0;
// }



