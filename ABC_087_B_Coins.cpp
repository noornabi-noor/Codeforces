#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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


    //.........Code Start Here.........


void solve(){
    int a,b,c,x,res=0,tmp;
    cin>>a>>b>>c>>x;
    for(int i=0;i<=a;i++){
        tmp=500*i;
        if(tmp>x){
            break;
        }
        for(int j=0;j<=b;j++){
            tmp=500*i+100*j;
            if(tmp>x){
                break;
            }
            for(int k=0;k<=c;k++){
                tmp=500*i+100*j+50*k;
                if(tmp>x){
                    break;
                }
                if(tmp==x){
                    res++;
                }
            }
        }
    }
    cout<<res<<"\n";
}

int32_t main(){


    BISMILLAH

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}



// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//   int A, B, C, X;
//   int res = 0;
//   int tmp;
//   cin >> A >> B >> C >> X;
//   for(int i=0; i<=A; i++){
//     tmp = 500*i;
//     if(tmp>X) break;
//     for(int j=0; j<=B; j++){
//       tmp = 500*i + 100*j;
//       if(tmp>X) break;
//       for(int k=0; k<=C; k++){
//         tmp = 500*i + 100*j + 50*k;
//         if(tmp>X) break;
//         if(tmp==X) res++;
//       }
//     }
//   }
//   cout << res << endl;
//   return 0;
// }