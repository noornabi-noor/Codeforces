#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

// Function to convert character digit to integer
int charToInt(char c) {
    return c - '0';
}

// Function to solve the problem for a single test case
long long solve(string s) {
    int n = s.length();
    if (n == 2) {
        // Only two digits, no operations needed, just return their sum
        return charToInt(s[0]) + charToInt(s[1]);
    }

    // Vector to store all possible results
    vector<long long> results;
    
    // Use bitmask to try all possible configurations of '+' and '×'
    for (int mask = 0; mask < (1 << (n - 1)); ++mask) {
        long long current_result = 0;
        long long current_number = 0;
        
        for (int i = 0; i < n; ++i) {
            current_number = current_number * 10 + charToInt(s[i]);
            
            // If it's not the last digit and '+' or '×' is used
            if (i < n - 1 && (mask & (1 << i))) {
                current_result += current_number;
                current_number = 0;  // reset current_number
            }
        }
        
        // Add the last number after the loop
        current_result += current_number;
        
        // Store the result
        results.push_back(current_result);
    }
    
    // Find the minimum result
    long long min_result = *min_element(results.begin(), results.end());
    
    return min_result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Solve the problem for this test case
        long long result = solve(s);
        
        // Output the result for this test case
        cout << result << endl;
    }
    
    return 0;
}
