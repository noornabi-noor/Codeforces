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
//     int t,n,x,y,f,k,i;
// 	for(scanf("%d",&t);t;--t,printf("%s",f?"-1\n":"\n")){
// 		for(scanf("%d%d%d",&n,&x,&y),f=(x&&y)||x+y<1||(n-1)%(x+y),x+=y,i=0;i<n-1&&!f;++i)printf("%d ",i/x*x+2);
// 	}
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


#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x,y,f,i;
	for(scanf("%d",&t);t;--t,printf("%s",f?"-1\n":"\n"))for(scanf("%d%d%d",&n,&x,&y),f=(x&&y)||x+y<1||(n-1)%(x+y),x+=y,i=0;i<n-1&&!f;++i)printf("%d ",i/x*x+2);
}