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


void solve(){
    map<int,int> mp;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int a;
        cin>>a;
		mp[a]++;
	}
	vector<int> q;
	for(auto v:mp)
	{
		if(v.second>=m)
		q.push_back(v.first);
	}
	if(q.size()==0)
	{
		cout<<-1<<"\n";
        return ;
	}
	int idx = q[0],l = q[0],r = q[0],len = 0;
	for(int i=1;i<q.size();i++)
	{
		if(q[i] == q[i-1]+1)
		{
			if(len<q[i]-idx)
			{
				len = q[i]-idx;
				r = q[i];
				l = idx;
			}
		}
		else{
			idx = q[i];
		}
	}
	cout<<l<<" "<<r<<"\n";
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