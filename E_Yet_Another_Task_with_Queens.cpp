#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> queens(m);
    map<int, set<int>> row_map, col_map, diag1_map, diag2_map;

    for (int i = 0; i < m; i++) {
        cin >> queens[i].first >> queens[i].second;
        row_map[queens[i].first].insert(queens[i].second);
        col_map[queens[i].second].insert(queens[i].first);
        diag1_map[queens[i].first - queens[i].second].insert(queens[i].first);
        diag2_map[queens[i].first + queens[i].second].insert(queens[i].first);
    }

    vector<int> threatCounts(9, 0);

    for (int i = 0; i < m; i++) {
        int r = queens[i].first, c = queens[i].second;
        int threats = 0;

        auto row_iter = row_map[r].find(c);
        if (row_iter != row_map[r].begin()) threats++;
        if (next(row_iter) != row_map[r].end()) threats++;

        auto col_iter = col_map[c].find(r);
        if (col_iter != col_map[c].begin()) threats++;
        if (next(col_iter) != col_map[c].end()) threats++;

        auto diag1_iter = diag1_map[r - c].find(r);
        if (diag1_iter != diag1_map[r - c].begin()) threats++;
        if (next(diag1_iter) != diag1_map[r - c].end()) threats++;

        auto diag2_iter = diag2_map[r + c].find(r);
        if (diag2_iter != diag2_map[r + c].begin()) threats++;
        if (next(diag2_iter) != diag2_map[r + c].end()) threats++;

        threatCounts[threats]++;
    }

    for (int i = 0; i < 9; i++) {
        cout << threatCounts[i] << " ";
    }
    cout << endl;

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, int>> queens(m);
//     for (int i = 0; i < m; i++) {
//         cin >> queens[i].first >> queens[i].second;
//     }

//     vector<int> threatCounts(9, 0);
//     for (int i = 0; i < m; i++) {

//         int threats = 0;
//         for (auto dir : directions) {
//             int r = queens[i].first;
//             int c = queens[i].second;
//             while (true) {
//                 r += dir.first;
//                 c += dir.second;
//                 if (r < 1 || r > n || c < 1 || c > n) break; 
//                 if (find(queens.begin(), queens.end(), make_pair(r, c)) != queens.end()) {
//                     threats++;
//                     break;
//                 }
//             }
//         }
//         threatCounts[threats]++;
//     }

    

//     for (int i = 0; i < 9; i++) {
//         cout << threatCounts[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }