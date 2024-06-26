#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int count_valid_inversions(const string& s) {
    int n = s.size();
    vector<int> prefix_sum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefix_sum[i + 1] = prefix_sum[i] + (s[i] == '(' ? 1 : -1);
    }

    unordered_map<int, int> count_map;
    for (int i = 0; i <= n; ++i) {
        count_map[prefix_sum[i]]++;
    }

    int valid_pairs = 0;
    for (int i = 0; i < n; ++i) {
        count_map[prefix_sum[i]]--;
        if (s[i] == '(') {
            valid_pairs += count_map[prefix_sum[i] + 2];
        } else {
            valid_pairs += count_map[prefix_sum[i] - 2];
        }
    }

    return valid_pairs;
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        results[i] = count_valid_inversions(s);
    }

    for (const auto& result : results) {
        cout << result << endl;
    }

    return 0;
}
