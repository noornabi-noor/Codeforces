#include<bits/stdc++.h>
const int   mod  = (int) 1000000007;
const int N = (int)1e6;

#define ll long long int

using namespace std;



ll BE(ll x,ll y){
    ll res=1;
    while(y){
        if(y&1){
            res=(res*x)%mod;
        }
        y>>=1;
        x=(x*x)%mod;
    }
    return res;
}

ll F[N+2];

void PreCalFacts(){
	ll res=1;
	for(ll i=1;i<=N;i++){
		res*=i;
		res%=mod;
		F[i]=res;
	}
}

ll nCr(ll n,ll r){
	if(r>=n)return 0LL;
	

	ll x=F[n];
	ll y=(F[r]%mod*F[n-r]%mod)%mod;

	y = BE(y,mod-2);

	ll ans=(x%mod * y%mod)%mod;

	return ans;

}

ll nPr(ll n,ll r){
	if(r>=n)return 0LL;
	

	ll x=F[n];
	ll y=(F[n-r]%mod)%mod;

	y = BE(y,mod-2);

	ll ans=(x%mod * y%mod)%mod;

	return ans;

}

int main(){
	PreCalFacts();
	int t;
	cin>>t;
	while(t--){

		ll n,r;
		cin>>n>>r;

		cout<<nCr(n,r)<<endl;
	}


	return 0;
}