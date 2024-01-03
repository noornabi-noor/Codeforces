#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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
int a[20];
int b[100];
int p=0,num;

void solve(){
    int n;
		cin>>n;
		unordered_map<int,int> m;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			m[x%10]++;
		}
		vector<int> v;
		for(int i=0;i<=9;i++){
			for(int j=1;j<=min(m[i],(int)3);j++){
				v.push_back(i);
			}
		}
 
		int flag=0;
 
		for(int i=0;i<v.size();i++){
			for(int j=i+1;j<v.size();j++){
				for(int k=j+1;k<v.size();k++){
					if((v[i]+v[j]+v[k])%10==3){
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
}

main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}