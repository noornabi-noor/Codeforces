
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char s[n+1];
    for(int i=1; i<=n; i++) {
        scanf(" %c", &s[i]);
    }
    int c=0;
    for(int i=1; i<=n; i+=c) {
        printf("%c", s[i]);
        c++;
    }
    return 0;
}

