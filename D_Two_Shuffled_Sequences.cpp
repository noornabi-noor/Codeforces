#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    if (n < k) {
        cout << "NO\n";
        return 0;
    }

    int sum = 0;
    vector<int> powers;

    for (int i = 0; i < 31; i++) {
        if (n & (1 << i)) {
            sum++;
            powers.push_back(1 << i);
        }
    }

    if (sum > k) {
        cout << "NO\n";
        return 0;
    }

    while (sum < k) {
        int last = powers.back();
        if (last == 1) {
            powers.pop_back();
            powers.push_back(2);
            powers.push_back(2);
        } else {
            powers.pop_back();
            powers.push_back(last / 2);
            powers.push_back(last / 2);
            sum++;
        }
    }

    cout << "YES\n";
    for (int i = 0; i < k; i++) {
        cout << powers[i] << " ";
    }
    cout << "\n";

    return 0;
}
