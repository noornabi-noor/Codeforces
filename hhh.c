#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int *parent, *size;

int find(int x) {
    if (parent[x] == x) return x;
    return parent[x] = find(parent[x]);
}

void unite(int x, int y) {
    int root_x = find(x);
    int root_y = find(y);

    if (root_x != root_y) {
        if (size[root_x] < size[root_y]) {
            int temp = root_x;
            root_x = root_y;
            root_y = temp;
        }
        parent[root_y] = root_x;
        size[root_x] += size[root_y];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int maxRating = 0;

    // Read ratings and find the maximum rating
    int *ratings = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &ratings[i]);
        if (ratings[i] > maxRating) {
            maxRating = ratings[i];
        }
    }

    parent = (int *)malloc((maxRating + 1) * sizeof(int));
    size = (int *)malloc((maxRating + 1) * sizeof(int));

    // Initialize parent and size arrays
    for (int i = 0; i <= maxRating; i++) {
        parent[i] = i;
        size[i] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if ratings have a common divisor greater than 1
            if (__gcd(ratings[i], ratings[j]) > 1) {
                unite(ratings[i], ratings[j]);
            }
        }
    }

    int *groups = (int *)malloc((maxRating + 1) * sizeof(int));
    int uniqueGroups = 0;

    // Count unique groups
    for (int i = 0; i < n; i++) {
        int root = find(ratings[i]);
        if (groups[root] == 0) {
            groups[root] = 1;
            uniqueGroups++;
        }
    }

    printf("%d\n", uniqueGroups);

    // Free dynamically allocated memory
    free(parent);
    free(size);
    free(groups);
    free(ratings);

    return 0;
}
