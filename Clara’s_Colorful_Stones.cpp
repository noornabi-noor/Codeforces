#include <iostream>
using namespace std;

void solve() {
    // Reading the input values
    int m, b, g;
    cin >> m >> b >> g;

    int count = 0;

    // Loop through all possible values for x (i.e., multiples of b)
    for (int x = 0; x * b <= m; x++) {
        int remaining = m - (x * b);

        // Check if remaining is divisible by g
        if (remaining % g == 0) {
            int y = remaining / g;
            // Print the valid combination of (x, y) where x * b + y * g = m
            cout << "x: " << x << " times " << b << " + y: " << y << " times " << g << " = " << m << endl;
            count++;
        }
    }

    cout << "Total number of valid combinations: " << count << endl;
}

int main() {
    // Call the solve function to execute the logic
    solve();
    return 0;
}
