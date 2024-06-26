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
