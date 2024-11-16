// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long

// ll g,x,y;

// void extendedGCD(ll a, ll b, ll &x, ll &y) {
//     if (b == 0) {
//         x = 1; 
//         y = 0;
//         g=a;
//         return;
//     }

//     ll x1, y1; 
//     extendedGCD(b, a % b, x1, y1);

//     x = y1;
//     y = x1 - (a / b) * y1;
// }

// int main() {
//     ll a, b,c;
//     cin >> a >> b>>c;

//     extendedGCD(a, b, x, y);
    
//     if (c % g) {
//         cout << -1; 
//     } else {
//         cout << -c / g * x << ' ' << -c / g * y;
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll extendedGCD(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll gcd = extendedGCD(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

bool findSolution(ll a, ll b, ll c, ll &x, ll &y) {
    ll g = extendedGCD(a, b, x, y); 
   
    if (c % g != 0) {
        return false; 
    }

    x *= (c / g);
    y *= (c / g);
    return true;
    return x,y;
}


void findAllSolutions(ll a, ll b, ll c) {
    ll x0, y0;
    if (!findSolution(a, b, c, x0, y0)) {
        cout << "-1\n";
        return;
    }

    cout<<x0<<" "<<y0<<"\n";

}

int main() {

    ll a, b, c;
    cin >> a >> b >> c;

    c=-1ll*c;

    findAllSolutions(a, b, c);

    return 0;
}


// Input
// 931480234 -1767614767 -320146190
// Output
// -98880374013340920 -52107006370101410