// #include <iostream>
// #include <vector>

// using namespace std;

// // Global variables
// int n; // Size of the chessboard (number of queens)
// int count = 0; // Counter for the number of solutions
// vector<int> column; // Column availability
// vector<int> diag1; // First diagonal availability
// vector<int> diag2; // Second diagonal availability
// vector<int> solution; // To store the current solution
// vector<vector<int>> allSolutions; // To store all the solutions

// void search(int y) {
//     if (y == n) {
//         count++;
//         allSolutions.push_back(solution); // Store the current solution
//         return;
//     }
//     for (int x = 0; x < n; x++) {
//         if (column[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
//         column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
//         solution[y] = x; // Record the position of the queen in row y
//         search(y + 1);
//         column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
//     }
// }

// int main() {
//     cout << "Enter the size of the chessboard (N): ";
//     cin >> n;
    
//     // Initialize vectors to represent the availability of columns and diagonals
//     column.resize(n, 0);
//     diag1.resize(2 * n - 1, 0);
//     diag2.resize(2 * n - 1, 0);
//     solution.resize(n, 0); // Initialize the solution vector to store column indices

//     // Start the search from the first row
//     search(0);
    
//     // Output the number of solutions
//     cout << "Number of solutions: " << count << endl;

//     // Output all solutions
//     for (const auto& sol : allSolutions) {
//         for (int i = 0; i < sol.size(); i++) {
//             for (int j = 0; j < sol.size(); j++) {
//                 if (sol[i] == j) {
//                     cout << "Q ";
//                 } else {
//                     cout << ". ";
//                 }
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
    
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int n, cnt = 0;
// vector<int> col, diag1, diag2, solu;
// vector<vector<int>> allSolutions;

// void search(int y) {
//     if (y == n) {
//         allSolutions.push_back(solu);
//         return;
//     }
//     for (int x = 0; x < n; x++) {
//         if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
//         col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
//         solu[y] = x;
//         //cout<<solu[y]<<" ";
//         search(y + 1);
//         col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
//     }
//     //cout<<"\n";
// }

// void printSolutions() {
//     for (const auto& sol : allSolutions) {
//         for (int i = 0; i < sol.size(); i++) {
//             for (int j = 0; j < sol.size(); j++) {
//                 if (sol[i] == j) {
//                     cout << "Q ";
//                 } else {
//                     cout << ". ";
//                 }
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }

// int main() {
   
//         cin >> n;

//         col.assign(n, 0);
//         solu.assign(n, 0);
//         diag1.assign(2 * n - 1, 0);
//         diag2.assign(2 * n - 1, 0);

//         allSolutions.clear();

//         search(0);

//         printSolutions();
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int n;
// vector<int> col, diag1, diag2, solu;
// vector<vector<int>> allSolutions;

// void search(int y) {
//     if (y == n) {
//         allSolutions.push_back(solu);
//         return;
//     }
//     for (int x = 0; x < n; x++) {
//         if (col[x] || diag1[x + y] || diag2[x - y + n - 1]) continue;
//         col[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
//         solu[y] = x;
//         search(y + 1);
//         col[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
//     }
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         cin >> n;
//         col.assign(n, 0);
//         solu.assign(n, 0);
//         diag1.assign(2 * n - 1, 0);
//         diag2.assign(2 * n - 1, 0);
//         allSolutions.clear();

//         search(0);

//         if (allSolutions.empty()) {
//             cout << endl;
//         } else {
//             for (const auto& sol : allSolutions) {
//                 for (int i = 0; i < sol.size(); i++) {
//                     for (int j = 0; j < sol.size(); j++) {
//                         if (sol[i] == j) {
//                             cout << "1 ";
//                         } else {
//                             cout << "0 ";
//                         }
//                     }
//                 }
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;

// const int MAX = 20;
// int x[MAX]; // Array to store the position of queens

// bool place(int k, int i) {
//     for (int j = 1; j < k; j++) {
//         if (x[j] == i || abs(x[j] - i) == abs(j - k)) {
//             return false;
//         }
//     }
//     return true;
// }

// void Nqueen(int k, int n) {
//     for (int i = 1; i <= n; i++) {
//         if (place(k, i)) {
//             x[k] = i;
//             if (k == n) {
//                 printSolution(n); // Print the solution when all queens are placed
//             } else {
//                 Nqueen(k + 1, n);
//             }
//         }
//     }
// }

// void printSolution(int n) {
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             if (x[i] == j) {
//                 cout << "Q ";
//             } else {
//                 cout << ". ";
//             }
//         }
//         cout << endl;
//     }
//     cout << endl;
// }



// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     Nqueen(1, n); // Start placing queens from the first row
//     printSolution(n);
//     return 0;
// }



#include <iostream>
#include <cmath>

using namespace std;

const int MAX_N = 20; // Maximum number of queens (you can adjust this)
int x[MAX_N]; // Array to store the column position of queens in each row

// Function to check if a queen can be placed at (row, col)
bool place(int row, int col) {
    for (int prevRow = 1; prevRow < row; prevRow++) {
        if (x[prevRow] == col || abs(x[prevRow] - col) == abs(prevRow - row)) {
            return false;
        }
    }
    return true;
}

// Function to print the solution
void printSolution(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (x[i] == j) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

// Recursive function to solve the N-Queens problem
void Nqueen(int row, int n) {
    for (int col = 1; col <= n; col++) {
        if (place(row, col)) {
            x[row] = col;
            if (row == n) {
                printSolution(n); // Print the solution when all queens are placed
            } else {
                Nqueen(row + 1, n);
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    if (n < 1 || n > MAX_N) {
        cout << "Number of queens must be between 1 and " << MAX_N << endl;
        return 1;
    }

    Nqueen(1, n);
    return 0;
}
