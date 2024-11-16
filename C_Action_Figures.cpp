#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

long long calculateMinCost(int n, const string& s) {
    long long totalCost = 0;
    long long currentCost = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            totalCost += i + 1;
            currentCost = i + 1;
        } else {
            totalCost += currentCost;
        }
    }

    return totalCost;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << calculateMinCost(n, s) << endl;
    }
    return 0;
}
