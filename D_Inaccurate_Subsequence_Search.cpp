#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define mod 1000000007
const int N = (int)1e6;
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

int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
int mod_div(int a, int b) { return mod_mul(a, inv(b)); }
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
int fact(int a) { if (a == 0 || a == 1) { return 1; } return mod_mul(a, fact(a - 1)); }
int nPr(int n, int r) { if (r > n) { return 0;} return mod_div(fact(n), fact(n - r));}
int nCr(int n, int r) { if (r > n) { return 0; } return mod_div(fact(n), mod_mul(fact(r), fact(n - r))); }

//.........Code Start Here.........

int countGoodSubsegments(vector<int>& a, vector<int>& b, int k) {
    int n = a.size();
    int m = b.size();
    unordered_map<int, int> bFreq;
    for (int num : b) {
        bFreq[num]++;
    }

    int goodSubsegments = 0;
    int matchingCount = 0;
    for (int i = 0; i < n; ++i) {
       
        if (bFreq.find(a[i]) != bFreq.end()) {
            if (bFreq[a[i]] > 0) {
                matchingCount++;
            }
            bFreq[a[i]]--;
        }

        if (i >= m) {
            if (bFreq.find(a[i - m]) != bFreq.end()) {
                if (bFreq[a[i - m]] >= 0) {
                    matchingCount--;
                }
                bFreq[a[i - m]]++;
            }
        }

        if (i >= m - 1 && matchingCount >= k) {
            goodSubsegments++;
        }
    }

    return goodSubsegments;
}


void solve(){

    int n,m,k;
    cin>>n>>m>>k;

    vll a(n),b(m);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    int ans = countGoodSubsegments(a, b, k);
        cout << ans << endl;
}

int32_t main(){
    BISMILLAH
    int te=1;
    cin>>te;
    while(te--){
        solve();
    }
    ALHAMDULILLAH
}



// #include <iostream>
// #include <unordered_set>
// #include <algorithm> // for std::find

// int countSameElements(std::unordered_set<int>& aSet, int b[], int sizeB) {
//     int count = 0;
//     for (int aElement : aSet) {
//         if (std::find(b, b + sizeB, aElement) != b + sizeB) { // Check if the element exists in b
//             ++count;
//         }
//     }
//     return count;
// }

// int main() {
//     int a[] = {9, 9, 2, 2, 10, 9, 7, 6, 3, 6, 3}; // 11 elements in total
//     int b[] = {6, 9, 7, 8, 10};                    // 5 elements

//     for (int i = 0; i <= 11 - 5; ++i) {
//         std::unordered_set<int> aSet(a + i, a + i + 5); // Create a set for each set of four elements from a
//         int sameElementsCount = countSameElements(aSet, b, 5);
//         std::cout << "For set starting at index " << i << ": Number of elements that are the same: " << sameElementsCount << std::endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <set>
// #include <algorithm> // for std::find

// int countSameElements(std::set<int>& aSet, int b[], int sizeB) {
//     int count = 0;
//     for (int aElement : aSet) {
//         if (std::find(b, b + sizeB, aElement) != b + sizeB) { // Check if the element exists in b
//             ++count;
//         }
//     }
//     return count;
// }

// int main() {
//     int a[] = {9, 9, 2, 2, 10, 9, 7, 6, 3, 6, 3}; // 11 elements in total
//     int b[] = {6, 9, 7, 8, 10};                    // 5 elements

//     int sizeA = sizeof(a) / sizeof(a[0]);
//     int sizeB = sizeof(b) / sizeof(b[0]);

//     for (int i = 0; i <= sizeA - sizeB; ++i) {
//         std::set<int> aSet(a + i, a + i + sizeB); // Create a set for each set of sizeB elements from a
//         int sameElementsCount = countSameElements(aSet, b, sizeB);
//         std::cout << "For set starting at index " << i << ": Number of elements that are the same: " << sameElementsCount << std::endl;
//     }

//     return 0;
// }




// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int countGoodSubsegments(vector<int>& a, vector<int>& b, int k) {
//     int n = a.size();
//     int m = b.size();
//     unordered_map<int, int> bFreq;
//     for (int num : b) {
//         bFreq[num]++;
//     }

//     int goodSubsegments = 0;
//     int matchingCount = 0;
//     for (int i = 0; i < n; ++i) {
//         // Include current element in the window
//         if (bFreq.find(a[i]) != bFreq.end()) {
//             if (bFreq[a[i]] > 0) {
//                 matchingCount++;
//             }
//             bFreq[a[i]]--;
//         }

//         // Remove leftmost element from the window if the window size exceeds m
//         if (i >= m) {
//             if (bFreq.find(a[i - m]) != bFreq.end()) {
//                 if (bFreq[a[i - m]] >= 0) {
//                     matchingCount--;
//                 }
//                 bFreq[a[i - m]]++;
//             }
//         }

//         // Check if the current window is good
//         if (i >= m - 1 && matchingCount >= k) {
//             goodSubsegments++;
//         }
//     }

//     return goodSubsegments;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;
//         vector<int> a(n);
//         vector<int> b(m);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         for (int i = 0; i < m; ++i) {
//             cin >> b[i];
//         }
//         int ans = countGoodSubsegments(a, b, k);
//         cout << ans << endl;
//     }
//     return 0;
// }

