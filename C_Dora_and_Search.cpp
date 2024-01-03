#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define pll pair<int, int>

#define M 1000000007
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
    int n,l,r;
    cin>>n;
    vll v(n);
    vll v1(n+1);
    vll v2;
    for(int i=0;i<n;i++){
        cin>>v[i];
        //v1[i]=v[i];
    }
    int lw=0,mn=1,mx=n;
    int hi=n-1,f=0;
    while(hi>=lw){
        if((v[hi]==mx && v[lw]==mn)||(v[hi]==mn && v[lw]==mx)){
        hi--;lw++;
        mn++;mx--;
    }
    else if(v[hi]==mx){
        hi--;mx--;
    }
    else if(v[hi]==mn){
        hi--;mn++;
    }
    else if(v[lw]==mx){
        lw++;mx--;
    }
    else if(v[lw]==mn){
        lw++;mn++;
    }
    else
    {
        cout<<lw+1<<" "<<hi+1<<"\n";
        f=1;
        break;
    }    
}
   if(f==0)
    cout<<-1<<endl;
}

int32_t main(){


    BISMILLAH

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    ALHAMDULILLAH
}