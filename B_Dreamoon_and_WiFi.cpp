#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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


    //.........Code Start Here.........


void solve(){
    string s1,s2;
	cin>>s1>>s2;
	int ps1 = 0;
	int ps2 = 0;
	int empty = 0;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i] == '+')
		{
			ps1++;
		}
		if(s2[i] == '+')
		{
			ps2++;
		}
		if(s2[i] == '?')
		{
			empty++;
		}
	}
	int  c = 0;
	//cout<<"Empty = "<<empty<<" "<<"LEn = "<<(1<<empty)<<"\n";
	for(int i=0; i< (1<<empty); i++)
	{
		//cout<<bitset<32>(i)<<"\n";
		//cout<<__builtin_popcount(i) <<" "<<ps2<<" "<<ps1<<"\n";
		if(__builtin_popcount(i) + ps2 == ps1)
		{
			c++;
		}
	}
	cout<<fixed<<setprecision(12)<<(double)c/(1<<empty)<<endl;
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