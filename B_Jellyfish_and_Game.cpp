// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define ld long double
// #define lld long long double
// #define ull unsigned long long
// #define pll pair<int, int>

// #define M 1000000007
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


//     //.........Code Start Here.........


// void solve(){
//     int n,m,k,s=0,s1=0;
//     cin>>n>>m>>k;
//     vll v1(n);
//     vll v2(m);
//     for(int i=0;i<n;i++){
//         cin>>v1[i];
//     }
//     sort(all(v1));
//     for(int i=0;i<m;i++){
//         cin>>v2[i];
//     }
//     sort(all(v2));
//     for(int i=0;i<n;i++){
//         s+=v1[i];
//     }
//     int a=min(v1[0],v2[0]);
//     int b=max(v1[n-1],v2[m-1]);
    
//     if(k==1){
//         if(v1[0]>=v2[m-1]){
//             cout<<s<<"\n";
//         }
//         else{
//             cout<<(s-v1[0]+v2[m-1])<<"\n";
//         }
//     }
//     else if(k==2){
//         if(v1[0]<v2[m-1]){
//             s=s-v1[0]+v2[m-1];
//             s=s+v2[0]-b;
//         }
//         else{
//             s=s-v1[n-1]+v2[0];
//         }
//         cout<<s<<"\n";
//     }
//     else{
//         if(v1[0]<v2[m-1]){
//             s=s-v1[0]+v2[m-1];
//             s1=s;
//             s=s+a-b;
//         }
//         else{
//             s=s-v1[n-1]+v2[0];
//         }
//         k-=2;
//         if(k%2!=0){
//             cout<<s1<<"\n"; 
//         }
//         else{
//             cout<<s<<"\n";
//         }
//     }
    
// }

// int32_t main(){


//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int t=1;
//     cin>>t;
//     while(t--){
//         solve();
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

#define M 1000000007
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
    int n,m,k,s=0,s1=0;
    cin>>n>>m>>k;
    vll v1(n);
    vll v2(m);
    
    for(int i=0;i<n;i++){
        cin>>v1[i];  
    }
    sort(all(v1));
    for(int i=0;i<m;i++){
        cin>>v2[i];  
    }
    sort(all(v2));
    if(k&1){
        if(v1[0]<v2[m-1]){
            swap(v1[0],v2[m-1]);
            sort(all(v1));
            sort(all(v2));
        }  
    }
    else{
        if(v1[0]<v2[m-1]){
            swap(v1[0],v2[m-1]);
            sort(all(v1));
            sort(all(v2));
        }  
        if(v2[0]<v1[n-1]){
            swap(v1[n-1],v2[0]);
            sort(all(v1));
            sort(all(v2));
        }
    }
    for(int i=0;i<n;i++){
            s+=v1[i];
    }
    cout<<s<<"\n";
}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}