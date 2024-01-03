#include <bits/stdc++.h>
using namespace std;

long long calculateK(int A, long long N) {
    long long r = 0;
    for (long long i = 1; i <= N; ++i) {
        r += labs(i % A - i % (A - 1));
    }
    return r;
}

int main() {
    int T;
    scanf("%d", &T);
    for (int t = 1; t <= T; t++) {
        int A;
        long long N;
        scanf("%d %lld", &A, &N);
        long long result = calculateK(A, N);
        printf("Case %d: %lld\n", t, result);
    }
    return 0;
}
