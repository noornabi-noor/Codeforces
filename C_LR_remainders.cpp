#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

//#define mod 1000000007
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

//int inv(int i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
int mod_mul(int a, int b,int mod) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
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


//.........Code Start Here.........



void solve() {
    int n, m;
    cin >> n >> m;
    vll v(n);
    int s = 1;
    const int MOD = m;
    int product = 1;

    for(auto &x: v){
		cin >> x;
	}
 
 
	string str;
	cin >> str;
	vll ans;
	int i = 0, j = n - 1;
	for(char c: str){
		if(c == 'L'){
			ans.push_back(v[i]);
			i++;
		}else{
			ans.push_back(v[j]);
			j--;
		}
	}
 
	reverse(ans.begin(), ans.end());
 
	vector<int> res;
 
	for(int ii =  0; ii < ans.size(); ++ii){
		s *= ans[ii];
		res.push_back(s % m);
		s = s % m;
	}
 
	reverse(res.begin(), res.end());
	for(auto x: res){
		cout << x << " ";
	}
 
	cout << '\n';
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
// #include <vector>

// // Function to perform modular multiplication
// int mod_mul(int a, int b, int mod) {
//     a = a % mod;
//     b = b % mod;
//     return (((a * b) % mod) + mod) % mod;
// }

// // Function to compute the product of all elements in a vector with modular arithmetic
// int compute_product(const std::vector<int>& vec, int mod) {
//     int product = 1;
//     for (int elem : vec) {
//         product = mod_mul(product, elem, mod);
//     }
//     return product;
// }

// int main() {
//     // Define the modulus value (e.g., a large prime number)
//     const int MOD = 40;

//     int n;
//     std::cout << "Enter the number of elements: ";
//     std::cin >> n;

//     // Initialize vector and read input values
//     std::vector<int> vec(n);
//     std::cout << "Enter the elements of the vector: ";
//     for (int i = 0; i < n; ++i) {
//         std::cin >> vec[i];
//     }

//     // Display the product after removing the first element each time
//     while (!vec.empty()) {
//         int product = compute_product(vec, MOD);
//         std::cout << "Product of elements modulo " << MOD << " is: " << product%40 << std::endl;
//         vec.erase(vec.begin());
//     }

//     return 0;
// }





