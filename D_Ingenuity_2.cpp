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

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
     if(n == 1 || n % 2 == 1) {
            cout<<"NO\n";
        }
        else if(n == 2 && s[0] != s[1]){
            cout<<"NO\n";
        }
        else{
            map<char, int> m;
        for(auto it : s) m[it]++;
        if(abs(m['N'] - m['S']) % 2 == 1 || abs(m['E'] - m['W']) % 2 == 1) {
            cout<<"NO\n";
        }
        else{
            int north = 0, south = 0, east = 1, west = 1;
        string ans = "";
        char t[2] = {'R', 'H'};
 
        for(int i = 0; i < n; i++) {
            if(s[i] == 'N') {
                ans.push_back(t[north]);
                north = !(north);
            }
            else if(s[i] == 'S') {
                ans.push_back(t[south]);
                south = !(south);
            }
            else if(s[i] == 'E') {
                ans.push_back(t[east]);
                east = !(east);
            }
            else if(s[i] == 'W') {
                ans.push_back(t[west]);
                west = !(west);
            }
        }
        cout<<ans<<endl;
        }
        
        }
        
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




// #include<bits/stdc++.h>
// using namespace std;
// const int N=1e6;
// char s[N],ans[N];
// int w[200];
// void qwq(){
// 	int n;
// 	scanf("%d%s",&n,s+1);
// 	int f=0;
// 	w['N']=w['S']=0;
// 	w['W']=w['E']=1;
// 	for(int i=1;i<=n;i++){
// 		ans[i]=w[s[i]]==0?'R':'H';
// 		if(ans[i]=='R')f|=1;
// 		if(ans[i]=='H')f|=2;
// 		w[s[i]]^=1;
// 	}
// 	ans[n+1]=0;
// 	if(f==3&&w['N']==w['S']&&w['W']==w['E'])puts(ans+1);
// 	else puts("NO");
// }
// int main(){
// 	int _;
// 	cin>>_;
// 	while(_--){
// 		qwq();
// 	}
// 	return 0;
// }