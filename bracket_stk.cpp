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

bool areBracketsBalanced(string s)
{
    // Declare a stack to hold the previous brackets.
    stack<char> stk;
    for (int i = 0; i < s.length(); i++) {
        if (stk.empty()) {
             
            // If the stack is empty 
            // just push the current bracket
            stk.push(s[i]);
        }
        else if ((stk.top() == '(' && s[i] == ')')
                 || (stk.top() == '{' && s[i] == '}')
                 || (stk.top() == '[' && s[i] == ']')) {
             
            // If we found any complete pair of bracket
            // then pop
            stk.pop();
        }
        else {
            stk.push(s[i]);
        }
    }
    if (stk.empty()) {
         
        // If stack is empty return true
        return true;
    }
    return false;
}

void solve(){
    string s;
    cin>>s;
    if (areBracketsBalanced(s))
        cout << "Balanced\n";
    else
        cout << "Not Balanced\n";
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