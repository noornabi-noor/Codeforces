// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define mod 1000000007
// const int N = (int)1e6;
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

// int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
// int mod_mul(int a, int b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
// int mod_add(int a, int b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
// int mod_sub(int a, int b) {a = a % mod; b = b % mod; return (((a - b) % mod) + mod) % mod;}
// int mod_div(int a, int b) { return mod_mul(a, inv(b)); }
// int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b);}
// int ceil_div(int a, int b) {return a % b == 0 ? a / b : a / b + 1;}
// int pwr(int a,int b) {a %= mod; int res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}
// int pwr1(ld  a, int n) { if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr1(a, n-1));} int tmp = pwr1(a, n/2); return (tmp*tmp); }
// int pwr_mod(int  a, int n, int modd){ if(n == 0LL) { return 1LL; } if(n%2 == 1){ return (a*pwr_mod(a, n-1,modd))%mod;} int tmp = pwr_mod(a, n/2,modd); return (tmp*tmp)%mod; }
// int fact(int a) { if (a == 0 || a == 1) { return 1; } return mod_mul(a, fact(a - 1)); }
// int nPr(int n, int r) { if (r > n) { return 0;} return mod_div(fact(n), fact(n - r));}
// int nCr(int n, int r) { if (r > n) { return 0; } return mod_div(fact(n), mod_mul(fact(r), fact(n - r))); }

// //.........Code Start Here.........

// bool isLeapYear(int year) {
   
//     if (year % 4 == 0) {
//         if (year % 100 == 0) {
            
//             if (year % 400 == 0) {
//                 return true; 
//             } else {
//                 return false; 
//             }
//         }
//         return true; 
//     }
//     return false;
// }

// void solve(){
//     int n;
//     cin>>n;

//     if (isLeapYear(n)) {
//         cout << n << " is a leap year." << endl;
//     } else {
//         cout << n << " is not a leap year." << endl;
//     }
// }

// int32_t main(){
//     BISMILLAH
//     int te=1;
//     //cin>>te;
//     while(te--){
//         solve();
//     }
//     ALHAMDULILLAH
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if a year is a leap year
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// // Function to calculate the total number of rows for a given year
// int calculateRows(int year) {
//     // Days in each month
//     vector<int> daysInMonth = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 
//                                 31, 31, 30, 31, 30, 31};
    
//     int totalRows = 0;

//     // Calculate rows needed for each month
//     for (int days : daysInMonth) {
//         // Each row can hold 7 days
//         totalRows += (days + 6) / 7; // Add (days + 6) / 7 to handle partial weeks
//     }

//     return totalRows;
// }

// int main() {
//     int year;
    
//     cout << "Enter a year: ";
//     cin >> year;

//     int rows = calculateRows(year);
//     cout << "Total rows for the year " << year << ": " << rows << endl;

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the total number of rows for a given year starting from a specific day
int calculateRows(int year) {
    // Days in each month: January, February, March, April, May, June, July, August, September, October, November, December
    vector<int> daysInMonth = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 
                                31, 31, 30, 31, 30, 31};

    int totalRows = 0;
    int dayOfWeek = 0; // Start with Monday (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)

    // Calculate rows needed for each month
    for (int days : daysInMonth) {
        // Calculate how many full weeks and remaining days
        int totalDaysInMonth = days + dayOfWeek; // Add the starting day offset
        totalRows += (totalDaysInMonth + 6) / 7; // Calculate the total rows needed for the month
        
        // Update the day of the week for the next month
        dayOfWeek = (totalDaysInMonth % 7); // Calculate the starting day of the next month
    }

    return totalRows;
}

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;

    int rows = calculateRows(year);
    cout << "Total rows for the year " << year << " (starting on Monday): " << rows << endl;

    return 0;
}



// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to check if a year is a leap year
// bool isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// // Function to calculate the total number of rows for a given year starting from a specific day
// int calculateRows(int year) {
//     // Days in each month
//     vector<int> daysInMonth = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 
//                                 31, 31, 30, 31, 30, 31};

//     int totalRows = 0;
//     int dayOfWeek = 0; // Start with Monday (0 = Monday, 1 = Tuesday, ..., 6 = Sunday)

//     // Calculate rows needed for each month
//     for (int days : daysInMonth) {
//         // Calculate how many full weeks and remaining days
//         int rows = (days + dayOfWeek + 6) / 7; // Full weeks including starting day
//         totalRows += rows;

//         // Update the day of the week for the next month
//         dayOfWeek = (dayOfWeek + days) % 7; // Calculate the starting day of the next month
//     }

//     return totalRows;
// }

// int main() {
//     int year;
    
//     cout << "Enter a year: ";
//     cin >> year;

//     int rows = calculateRows(year);
//     cout << "Total rows for the year " << year << " (starting on Monday): " << rows << endl;

//     return 0;
// }
