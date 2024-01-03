#include <bits/stdc++.h>
using namespace std;
#define ll long long

int slidOdd(vector<ll> &v, ll n, ll k) {
    ll c = 0, oddCount = 0;
    for (ll i = 0; i < k; i++) {
        if (v[i] % 2 != 0) {
            oddCount++;
        }
    }
    if (oddCount > 0) {
        c=1;
    }

    for (ll i = k; i < n; i++) {
        if (v[i - k] % 2 != 0) {
            oddCount--;
        }
        if (v[i] % 2 != 0) {
            oddCount++;
        }
        if (oddCount > 0) {
            c++;
        }
    }
    return c;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll result = slidOdd(v, n, k);
        cout << result << endl;
    }
    return 0;
}
