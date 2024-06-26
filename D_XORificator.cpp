#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<string> matrix(n);
        vector<int> ones_count(m, 0);

        // Read the matrix and count the number of ones in each column
        for (int i = 0; i < n; ++i) {
            cin >> matrix[i];
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == '1') {
                    ones_count[j]++;
                }
            }
        }

        // Find the maximum count of ones among all columns
        int max_ones_count = *max_element(ones_count.begin(), ones_count.end());

        // Determine the set of rows where the XORificator should be applied
        string xor_rows(n, '0');
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == '1' && ones_count[j] == max_ones_count) {
                    xor_rows[i] = '1';
                    break;
                }
            }
        }

        // Output the maximum count of special columns and the XORificator configuration
        cout << max_ones_count << endl;
        cout << xor_rows << endl;
    }

    return 0;
}
