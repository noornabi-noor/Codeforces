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
// int LYBefore(int y)
// {
//     y--;
//     return (y / 4) - (y / 100) + (y / 400);
// }


// //int cLY;
// int LeapY(int sty, int eny)
// {
//     int cLY = 0;
//     if( (sty >0) && (sty < eny))
//     {
//         cLY = (LYBefore(eny) - LYBefore(sty+1));
//     }
//     return cLY;
// }

// void solve(){
//     int n,m;
//     cin>>n>>m;
//     int diff=m-n+1;
//     const int leapYearCnt = LeapY(n, m);
//     int s=diff-leapYearCnt;
//     cout<<s*52+leapYearCnt*53<<"\n";
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int main() {

//   int year;
//   cout << "Enter a year: ";
//   cin >> year;
//   if (year % 400 == 0) {
//     cout << year << " is a leap year.";
//   }
//   else if (year % 100 == 0) {
//     cout << year << " is not a leap year.";
//   }
//   else if (year % 4 == 0) {
//     cout << year << " is a leap year.";
//   }
//   else {
//     cout << year << " is not a leap year.";
//   }
//   return 0;
// }


// #include <iostream>

// using namespace std;

// const int DAYS_IN_LEAP_YEAR = 53;
// const int DAYS_IN_NON_LEAP_YEAR = 52;

// int countDaysInYear(int n) {
//     if(n%400==0){
//        return 53;
//     }
//     else if(n%100==0){
//         return 52;
//     }
//     else if(n%4==0){
//         return 53;
//     }
//     else{
//        return 52;
//     }
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
    
//     int totalDays = 0;

//     // Calculate the total days in a range using arithmetic progression formula
//     if (n <= m) {
//         int numLeapYears = (m / 4) - ((n - 1) / 4);
//         int numNonLeapYears = (m - n + 1) - numLeapYears;
        
//         totalDays = numLeapYears * DAYS_IN_LEAP_YEAR + numNonLeapYears * DAYS_IN_NON_LEAP_YEAR;
//     }

//     cout << totalDays << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int LYBefore(int y)
// {
//     y--;
//     return (y / 4) - (y / 100) + (y / 400);
// }



// #include <bits/stdc++.h>
// using namespace std;

// int countLeapYears(int startYear, int endYear) {
//     startYear--;
//     return (endYear / 4) - (startYear / 4) - (endYear / 100) + (startYear / 100) + (endYear / 400) - (startYear / 400);
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     int diff = m - n + 1;
//     int leapYearCnt = countLeapYears(n, m);
//     int s = diff - leapYearCnt;

//     cout << s * 52 + leapYearCnt * 53 << "\n";
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
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
// int leap( int n ){
//     if(n%400==0){
//        return 53;
//     }
//     else if(n%100==0){
//         return 52;
//     }
//     else if(n%4==0){
//         return 53;
//     }
//     else{
//        return 52;
//     }
// }

// void solve(){
//     int n,m,s=0;
//     cin>>n>>m;
//     for(int i=n;i<=m;i++){
//         s+=leap(i);
//     }
//     cout<<s<<"\n";
// }

// main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
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

// int countLeapYears(int startYear, int endYear) {
//     startYear--;
//     return (endYear / 4) - (startYear / 4) - (endYear / 100) + (startYear / 100) + (endYear / 400) - (startYear / 400);
// }

// void solve(){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int diff = m - n + 1;
//     int leapYearCnt = countLeapYears(n, m);
//     int s = diff - leapYearCnt;
//     int res=s * 52 + leapYearCnt * 53;
//     printf("%d\n",res);
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t;
//     scanf("%d",&t);
//     //cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }