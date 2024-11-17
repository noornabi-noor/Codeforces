#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<long long, long long> memo;

// Recursive function to calculate fusc value with memoization
long long fusc(long long n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;  // Base case
    if (memo.find(n) != memo.end()) return memo[n];  // Check memo

    if (n % 2 == 0) {
        memo[n] = fusc(n / 2);  // f(2n) = f(n)
    } else {
        memo[n] = fusc(n / 2) + fusc(n / 2 + 1);  // f(2n+1) = f(n) + f(n+1)
    }
    return memo[n];
}

// Function to find the maximum fusc value up to n
long long findMaxFusc(long long n) {
    long long maxFusc = 0;

    for (long long i = 0; i <= n; ++i) {
        maxFusc = max(maxFusc, fusc(i));
    }
    return maxFusc;
}

int main() {
    long long n;
    cin >> n;

    cout << findMaxFusc(n) << endl;

    return 0;
}
