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
//     int n;
//     cin >> n;
//     vector<int> a(n), b(n);
//     int f=0;
//     map<int,vector<int>>mp;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         mp[a[i]].push_back(i);
//     }
//     for(auto &u:mp){
//         if(u.second.size()>=2){
//             if(f==0){
//                 b[u.second[0]]=1;
//                 for(int i=1;i<u.second.size();i++){
//                     b[u.second[i]]=3;
//                 }
//             }
//             else{
//                 b[u.second[0]]=1;
//                 for(int i=1;i<u.second.size();i++){
//                     b[u.second[i]]=2;
//                 }
//             }
//             f++;
//         }
//         else{
//             b[u.second[0]]=u.first;
//         }
//     }
//     if(f<2){
        
//         cout<<"-1\n";
//     }
//     else{
//         for(auto &&j:b){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

// int32_t main(){


//     BISMILLAH

//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
//     }
//     ALHAMDULILLAH
// }


#include <bits/stdc++.h>

using namespace std;
#define linf LLONG_MAX
#define inf INT_MAX
#define pi 3.1415926535898
#define ll long long
#define md 1000000007
#define _sz(x) (int)x.size()
#define vi vector<int>
#define vvi vector<vector<int>>
#define vil vector<ll>
#define vpi vector<pair<int, int>>
#define vpil vector<pair<ll, ll>>
#define pii pair<int, int>
#define piil pair<ll, ll>
#define si set<int>
#define sl set<ll>
#define in insert
#define ers erase
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define endl "\n"
#define fr(i, iniv, n) for (int i = iniv; i < n; i++)
#define rf(i, iniv, z) for (int i = iniv; i >= z; i--)

ll binex(ll a, ll b)
{
   ll res = 1;
   while (b > 0)
   {
      if (b & 1)
         res = (res * a) % md;
      a = (a * a) % md;
      b >>= 1;
   }
   return res;
}

int testcase = 1;
void solve()
{
   int n;
   cin >> n;
   vi a(n);
   int cnt[101] = {0};
   int kp = 0;
   si str;
   fr(i, 0, n)
   {
      cin >> a[i];
      cnt[a[i]]++;
      if (cnt[a[i]] > 1 && cnt[a[i]]<3)
      {
         kp++;
         str.in(a[i]);
      }
   }
   // cout<<kp<<endl;
   if (kp < 2)
      cout << -1 << endl;
   else
   {
      int ot[n] = {0};
      int tmp = 1;
      for (auto x : str)
      {
         bool chk = 0;
         fr(j, 0, n)
         {
            if (a[j] == x && !chk)
            {
               chk = 1;
               ot[j] = tmp + 1;
               // cout<<x<<" "<<tmp<<endl;
            }
            else if(a[j] == x)
               ot[j] = tmp;
         }
         tmp++;
         if (tmp == 3)
            tmp = 1;
      }
      fr(i,0,n){
         if(ot[i]!=0) cout<<ot[i]<<" ";
         else cout<<3<<" ";
      }
      cout<<endl;
   }
}

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.text", "r", stdin);
   freopen("output.text", "w", stdout);
#endif
   int t;
   cin >> t;
   while (t--)
      solve();
}