#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007; 


int countConfusedPairs(const vector<int>& permutation) {
    int count = 0;
    int n = permutation.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (permutation[i] > permutation[j]) {
                count++;
            }
        }
    }
    return count;
}


void countPermutations(int N, int C, long long& resultCount) {
    vector<int> permutation(N);
   
    for (int i = 0; i < N; ++i) {
        permutation[i] = i + 1;
    }

    
    do {
        if (countConfusedPairs(permutation) == C) {
            resultCount = (resultCount + 1) % MOD; 
        }
    } while (next_permutation(permutation.begin(), permutation.end()));
}

int main() {
    int N, C;
    
    cin >> N;

    cin >> C;

    long long resultCount = 0; 
    countPermutations(N, C, resultCount);

    cout <<  resultCount << endl;

    return 0;
}