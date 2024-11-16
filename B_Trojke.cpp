#include <iostream>
#include <vector>

using namespace std;

int countTriplets(const vector<vector<char>>& grid) {
    int n = grid.size();
    int tripletCount = 0;

    // Count horizontal triplets
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 2; j++) {
            if (grid[i][j] != ' ' && grid[i][j + 1] != ' ' && grid[i][j + 2] != ' ') {
                tripletCount++;
            }
        }
    }

    // Count vertical triplets
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - 2; i++) {
            if (grid[i][j] != ' ' && grid[i + 1][j] != ' ' && grid[i + 2][j] != ' ') {
                tripletCount++;
            }
        }
    }

    // Count diagonal triplets (top-left to bottom-right)
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            if (grid[i][j] != ' ' && grid[i + 1][j + 1] != ' ' && grid[i + 2][j + 2] != ' ') {
                tripletCount++;
            }
        }
    }

    // Count diagonal triplets (top-right to bottom-left)
    for (int i = 0; i < n - 2; i++) {
        for (int j = 2; j < n; j++) {
            if (grid[i][j] != ' ' && grid[i + 1][j - 1] != ' ' && grid[i + 2][j - 2] != ' ') {
                tripletCount++;
            }
        }
    }

    return tripletCount;
}

int main() {
    int N;
    cin >> N; // Read the size of the grid
    vector<vector<char>> grid(N, vector<char>(N));

    // Fill the grid with letters
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j]; // Assuming letters are provided in input
        }
    }

    int result = countTriplets(grid);
    cout << result << endl; // Output the total number of triplets found

    return 0;
}
