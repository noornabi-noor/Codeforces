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

// void solve(){
//     int n,k;
//     cin>>n>>k;
//     if(n==1){
//         cout<<k<<"\n";
//     }
//     else{
//         int num=1;
//         int s=1;
//         int f=0;
//         int res;
//             while(s<=k){
//                 num*=2;
//                 s+=num;
//                 if(s>k){
//                     //break;
//                     res=s-num;
//                 }
//                 else{
//                     res=s;
//                 }
//         }
        
//         cout<<res<<" "<<k-res<<" ";
//         for(int i=0;i<n-2;i++){
//             cout<<"0 ";
//         }
//         cout<<"\n";
//     }
// }

// int32_t main(){
//     BISMILLAH
//     int te=1;
//     cin>>te;
//     while(te--){
//         solve();
//     }
//     ALHAMDULILLAH
// }


#include <bits/stdc++.h>
using namespace std;

#define ll long long int


ll a[1000000];

ll ST[4000000];
ll pending[4000000];


void propagate(int SI,int b,int e){
	if(pending[SI]!=0){
		ST[SI]+=(pending[SI]*(e-b+1));
		if(b!=e){
			pending[2*SI]+=pending[SI];
			pending[(2*SI)+1]+=pending[SI];
		}
		pending[SI]=0;
	}
}

void build(int SI,int b,int e){
	if(b==e){
		ST[SI]=a[b];
		pending[SI]=0;
		return;
	}
	int left=2*SI;
	int right=(2*SI)+1;
	int mid=(b+e)/2;

	build(left,b,mid);
	build(right,mid+1,e);

	ST[SI]=ST[left]+ST[right];
	pending[SI]=pending[left]+pending[right];
}

void update(int SI,int b,int e,int l,int r,int val){
	

	propagate(SI,b,e);


	if(b>r or e<l){
		return;
	}

	int left=2*SI;
	int right=(2*SI)+1;
	int mid=(b+e)/2;

	if(b>=l and e<=r){
		ST[SI]+=(val*(e-b+1));

		if(b!=e){
			pending[left]+=val;
			pending[right]+=val;
		}
		return;
	}

	update(left,b,mid,l,r,val);
	update(right,mid+1,e,l,r,val);

	ST[SI]=ST[left]+ST[right];

}

ll query(int SI,int b,int e,int l,int r){


	propagate(SI,b,e);


	if(b>r or e<l){
		return 0LL;
	}

	if(b>=l and e<=r){
		return ST[SI];
	}

	int left=2*SI;
	int right=(2*SI)+1;
	int mid=(b+e)/2;

	ll L=query(left,b,mid,l,r);
	ll R=query(right,mid+1,e,l,r);

	return (L+R);
}



int main(){

	int n,q;				cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}

	build(1,1,n);

	while(q--){
		int type;			cin>>type;
		if(type==1){
			// update 
			int l,r,u;		cin>>l>>r>>u;
			update(1,1,n,l,r,u);
		}
		else{
			// query
			int l,r;		cin>>l>>r;
			cout<<query(1,1,n,l,r)<<endl;
		}
	}
	

	return 0;
}
