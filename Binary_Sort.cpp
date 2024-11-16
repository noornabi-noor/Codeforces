#include <iostream>
#include <vector>
using namespace std;

int minOperationsToMakeIncreasing(vector<long long>& a) {
    int n = a.size();
    int operations = 0;

    // Traverse the sequence from the second element onwards
    for (int i = 1; i < n; ++i) {
        // If current element is less than or equal to the previous element
        if (a[i] <= a[i - 1]) {
            int operationsForCurrent = 0;
            // We need to increase a[i] to be greater than a[i-1]
            while (a[i] <= a[i - 1]) {
                // Find the lowest bit we can set to make a[i] larger than a[i-1]
                a[i] |= (1LL << __builtin_ctz(a[i] ^ a[i - 1]));
                operationsForCurrent++;
            }
            operations += operationsForCurrent;
        }
    }

    return operations;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int result = minOperationsToMakeIncreasing(a);
        cout << result << endl;
    }

    return 0;
}
