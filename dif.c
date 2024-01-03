#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, c = 0, i, j;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    c++;
                }
                break;
            }
        }
        printf("%d\n", c);
    }
    return 0;
}
