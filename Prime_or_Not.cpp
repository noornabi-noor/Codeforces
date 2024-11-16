// #include <iostream>
// #include <cstring>
// #include <cstdlib>
// #define ll long long
// using namespace std;
 
// /* 
//  * calculates (a * b) % c taking into account that a * b might overflow 
//  */
// ll mulmod(ll a, ll b, ll mod)
// {
//     ll x = 0,y = a % mod;
//     while (b > 0)
//     {
//         if (b % 2 == 1)
//         {    
//             x = (x + y) % mod;
//         }
//         y = (y * 2) % mod;
//         b /= 2;
//     }
//     return x % mod;
// }
// /* 
//  * modular exponentiation
//  */
// ll modulo(ll base, ll exponent, ll mod)
// {
//     ll x = 1;
//     ll y = base;
//     while (exponent > 0)
//     {
//         if (exponent % 2 == 1)
//             x = (x * y) % mod;
//         y = (y * y) % mod;
//         exponent = exponent / 2;
//     }
//     return x % mod;
// }
 
// /*
//  * Miller-Rabin primality test, iteration signifies the accuracy
//  */
// bool Miller(ll p,int iteration)
// {
//     if (p < 2)
//     {
//         return false;
//     }
//     if (p != 2 && p % 2==0)
//     {
//         return false;
//     }
//     ll s = p - 1;
//     while (s % 2 == 0)
//     {
//         s /= 2;
//     }
//     for (int i = 0; i < iteration; i++)
//     {
//         ll a = rand() % (p - 1) + 1, temp = s;
//         ll mod = modulo(a, temp, p);
//         while (temp != p - 1 && mod != 1 && mod != p - 1)
//         {
//             mod = mulmod(mod, mod, p);
//             temp *= 2;
//         }
//         if (mod != p - 1 && temp % 2 == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }
// //Main
// int main()
// {
//     int t;
//     cin>>t;

//     while(t--){
//         int iteration = 5;
//         ll num;
//         cin>>num;
//         if (Miller(num, iteration))
//             cout<<"YES"<<endl;
//         else
//             cout<<"NO"<<endl;
//     }
    
//     return 0;
// }



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

int power(int x, unsigned int y, int p)
{
	int res = 1;	 
	x = x % p; 

	while (y > 0)
	{
		
		if (y & 1)
			res = (res*x) % p;

		y = y>>1; 
		x = (x*x) % p;
	}
	return res;
}


bool miillerTest(int d, int n)
{
	int a = 2 + rand() % (n - 4);

	// Compute a^d % n
	int x = power(a, d, n);

	if (x == 1 || x == n-1)
	return true;


	while (d != n-1)
	{
		x = (x * x) % n;
		d *= 2;

		if (x == 1)	 return false;
		if (x == n-1) return true;
	}

	return false;
}

bool isPrime(int n, int k)
{
	if (n <= 1 || n == 4) return false;
	if (n <= 3) return true;

	int d = n - 1;
	while (d % 2 == 0)
		d /= 2;

	for (int i = 0; i < k; i++)
		if (!miillerTest(d, n))
			return false;

	return true;
}

void solve(){
    int k = 4; 
    int n;

    cin>>n;

    if (isPrime(n, k))
        cout << "YES\n";
    else
        cout << "NO\n";
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




// #include <bits/stdc++.h>
// using namespace std;

// int power(int x, unsigned int y, int p)
// {
// 	int res = 1;	 
// 	x = x % p; 

// 	while (y > 0)
// 	{
		
// 		if (y & 1)
// 			res = (res*x) % p;

// 		y = y>>1; 
// 		x = (x*x) % p;
// 	}
// 	return res;
// }


// bool miillerTest(int d, int n)
// {
// 	int a = 2 + rand() % (n - 4);

// 	// Compute a^d % n
// 	int x = power(a, d, n);

// 	if (x == 1 || x == n-1)
// 	return true;


// 	while (d != n-1)
// 	{
// 		x = (x * x) % n;
// 		d *= 2;

// 		if (x == 1)	 return false;
// 		if (x == n-1) return true;
// 	}

// 	return false;
// }

// bool isPrime(int n, int k)
// {
// 	if (n <= 1 || n == 4) return false;
// 	if (n <= 3) return true;

// 	int d = n - 1;
// 	while (d % 2 == 0)
// 		d /= 2;

// 	for (int i = 0; i < k; i++)
// 		if (!miillerTest(d, n))
// 			return false;

// 	return true;
// }

// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int k = 4; 
//         int n;
//         cin>>n;
//         if (isPrime(n, k))
//             cout << "YES\n";
//         else
//             cout << "NO\n";
//     }
	
// 	return 0;
// }
