#include <iostream>
#include <vector>

using namespace std;

bool isConsistent(int days, vector<vector<int>>& exercises) {
    // Compare the exercises of each day
    for (int i = 0; i < days; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (exercises[i][j*3 + 2] != exercises[0][j*3 + 2]) { // Number of repetitions for the j-th exercise
                return false;
            }
        }
    }
    return true;
}

void solve() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int days;
        cin >> days;  // Number of days
        
        vector<vector<int>> exercises(days, vector<int>(15));  // Store 5 exercises per day, each has 3 values (exercise, sets, repetitions)
        
        // Input the exercises for each day
        for (int i = 0; i < days; ++i) {
            for (int j = 0; j < 5; ++j) {
                cin >> exercises[i][j*3] >> exercises[i][j*3 + 1] >> exercises[i][j*3 + 2];
            }
        }
        
        // Check if the plan is consistent
        if (isConsistent(days, exercises)) {
            cout << "Consistent" << endl;
        } else {
            cout << "Inconsistent" << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
