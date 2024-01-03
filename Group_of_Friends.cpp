// #include <bits/stdc++.h>
// using namespace std;

// class noor {
// private:
//     vector<int> parent;
//     vector<int> size;
// public:
//     noor(int n) {
//         parent.resize(n);
//         size.resize(n, 1);
//         for (int i = 0; i < n; i++) {
//             parent[i] = i;
//         }
//     }
//     int find(int x) {
//         if (parent[x] == x) return x;
//         return parent[x] = find(parent[x]);
//     }
//     void unite(int x, int y) {
//         int root_x = find(x);
//         int root_y = find(y);

//         if (root_x != root_y) {
//             if (size[root_x] < size[root_y]) {
//                 swap(root_x, root_y);
//             }
//             parent[root_y] = root_x;
//             size[root_x] += size[root_y];
//         }
//     }
//     int getSize(int x) {
//         return size[find(x)];
//     }
// };
// int main() {
//     int n;
//     cin >> n;
//     vector<int> rat(n);
//     for (int i = 0; i < n; i++) {
//         cin >> rat[i];
//     }
//     const int maxRating = *max_element(rat.begin(), rat.end());
//     noor dsu(maxRating + 1);
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (__gcd(rat[i], rat[j]) > 1) {
//                 dsu.unite(rat[i], rat[j]);
//             }
//         }
//     }
//     unordered_map<int, int> g;
//     int ug = 0;
//     for (int i = 0; i < n; i++) {
//         int root = dsu.find(rat[i]);
//         if (!g.count(root)) {
//             g[root] = 1;
//             ug++;
//         }
//     }
//     cout << ug << "\n";
//     return 0;
// }


// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
// using namespace std;

// vector<int> p;
// vector<int> size;

// int find(int x) {
//     if (p[x] == x) return x;
//     return p[x] = find(p[x]);
// }

// void unite(int x, int y) {
//     int root_x = find(x);
//     int root_y = find(y);

//     if (root_x != root_y) {
//         if (size[root_x] < size[root_y]) {
//             swap(root_x, root_y);
//         }
//         p[root_y] = root_x;
//         size[root_x] += size[root_y];
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     vector<int> rat(n);
//     for (int i = 0; i < n; i++) {
//         cin >> rat[i];
//     }

//     const int mx = *max_element(rat.begin(), rat.end());

//     p.resize(mx + 1);
//     size.resize(mx + 1, 1);

//     for (int i = 0; i <= mx; i++) {
//         p[i] = i;
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (__gcd(rat[i], rat[j]) > 1) {
//                 unite(rat[i], rat[j]);
//             }
//         }
//     }

//     unordered_map<int, int> groups;
//     int ug = 0;

//     for (int i = 0; i < n; i++) {
//         int root = find(rat[i]);
//         if (!groups.count(root)) {
//             groups[root] = 1;
//             ug++;
//         }
//     }

//     cout << ug << "\n";

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

vector<int> p;
vector<int> size;

int find(int x) {
    if (p[x] == x) return x;
    return p[x] = find(p[x]);
}

void unite(int x, int y) {
    int r_x = find(x);
    int r_y = find(y);
    
    if (r_x != r_y) {
        if (size[r_x] < size[r_y]) {
            swap(r_x, r_y);
        }
        p[r_y] = r_x;
        size[r_x] += size[r_y];
    }
}


void solve(){
    int n;
    cin >> n;

    vector<int> rat(n);
    for (int i = 0; i < n; i++) {
        cin >> rat[i];
    }

    const int mx = *max_element(rat.begin(), rat.end());

    p.resize(mx + 1);
    size.resize(mx + 1, 1);

    for (int i = 0; i <= mx; i++) {
        p[i] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(rat[i], rat[j]) > 1) {
                unite(rat[i], rat[j]);
            }
        }
    }

    unordered_map<int, int> groups;
    int ug = 0;

    for (int i = 0; i < n; i++) {
        int root = find(rat[i]);
        if (!groups.count(root)) {
            groups[root] = 1;
            ug++;
        }
    }

    cout << ug << "\n";

}

int32_t main(){


    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}