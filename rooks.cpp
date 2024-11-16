// // #include <iostream>
// // #include <vector>
// // #include <cmath>
// // using namespace std;

// // int main() {
// //     int n;
// //     cin >> n;
// //     vector<int> p(n);

// //     for (int i = 0; i < n; i++) {
// //         cin >> p[i];
// //     }

// //     int total_moves = 0;
// //     for (int i = 0; i < n; i++) {
// //         // Calculate absolute difference between current position (i+1) and target position p[i]
// //         total_moves += abs((i + 1) - p[i]);

// //         cout<<i+1<<" "<<p[i]<<" ";
// //     }
// //     cout<<"\n";

// //     cout << total_moves << endl;
// //     return 0;
// // }



// #include <iostream>
// #include <tuple>
// #include <vector>
// #include <cmath>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> p(n);

//     for (int i = 0; i < n; i++) {
//         cin >> p[i];
//     }

//     int total_moves = 0;
//     vector<tuple<int, int, int, int>> moves; // To store moves as tuples (c1, r1, c2, r2)

//     for (int i = 0; i < n; i++) {
//         int start_col = i + 1;   // Starting column (1-indexed)
//         int end_col = p[i];      // Target column (1-indexed)
        
//         if (start_col != end_col) {
//             total_moves += abs(start_col - end_col);
//             moves.push_back(make_tuple(start_col, 1, end_col, 1));
//         }
//     }

//     // Output the total moves count
//     cout << total_moves << endl;
    
//     // Output each move in the format "c1 r1 c2 r2"
    
//     for (const auto& move : moves) {
//         int c1, r1, c2, r2;
//         tie(c1, r1, c2, r2) = move;
//         cout << c1 << " " << r1 << " " << c2 << " " << r2 << endl;
//     }

//     return 0;
// }






#include <iostream>
#include <vector>
#include <tuple>  // Needed for std::tuple, std::make_tuple, and std::tie
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);

    // Reading the permutation
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int total_moves = 0;
    vector<tuple<int, int, int, int>> moves; // Stores moves as tuples (c1, r1, c2, r2)

    for (int i = 0; i < n; i++) {
        int start_col = i + 1;  // Initial column of the rook (1-based index)
        int end_col = p[i];     // Target column for the rook (from permutation p)

        if (start_col != end_col) {
            total_moves++; // Increment the count of moves
            moves.push_back(make_tuple(start_col, 1, end_col, 1));
        }
    }

    // Print total number of moves
    cout << total_moves << endl;

    // Print each move in the format "c1 r1 c2 r2"
    for (const auto& move : moves) {
        int c1, r1, c2, r2;
        tie(c1, r1, c2, r2) = move;
        cout << c1 << " " << r1 << " " << c2 << " " << r2 << endl;
    }

    return 0;
}