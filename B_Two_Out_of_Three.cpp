#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
#define BISMILLAH                \
   ios_base::sync_with_stdio(0); \
   cin.tie(0);
#define ALHAMDULILLAH return 0;
#define YES cout << "YES" << '\n'
#define Yes cout << "Yes" << '\n'
#define yes cout << "yes" << '\n'
#define NO cout << "NO" << '\n'
#define No cout << "No" << '\n'
#define no cout << "no" << '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fi first
#define se second
#define pb push_back
#define ppb pop_back
#define lb lower_bound
#define up upper_bound
#define fo(i, a, b) for (int i = a; i <= b; i++)
#define sort0(v) sort(all(v))
#define vll vector<int>
#define vvll vector<vector<int>>

//.........Code Start Here.........

void solve()
{
   int n;
   cin >> n;
   vll a(n);
   map<int,int> mp;
   map<int,int> mp2;
   int count = 0;
   for (int i = 0; i < n; i++)
   {
      cin >> a[i];
      mp[a[i]]++;
   }
   int b[n];
   for (auto it : mp)
   {
      if (it.second > 1)
         count++;
   }

   if (count < 2)
   {
      cout << "-1" << endl;
      return;
   }

   for (int i = 0; i < n; i++)
   {
      if (mp[a[i]] > 1)
      {
         if (mp2.find(a[i]) != mp2.end() || mp2.size() >= 2)
         {
            b[i] = 3;
         }
         else
         {
            b[i] = mp2.size() + 1;
            mp2[a[i]]++;
         }
      }
      else{
         b[i] = 1;
      }
         
   }

   for (int i = 0; i < n; i++){
      cout << b[i] << " ";
   }
      
   cout << "\n";
}

int32_t main()
{
   BISMILLAH

   int t = 1;
   cin >> t;
   while (t--)
   {
      solve();
   }
   ALHAMDULILLAH
}