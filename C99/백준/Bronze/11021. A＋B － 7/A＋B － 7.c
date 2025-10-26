#include <stdio.h>

int main() {
    int N;
    int i;
    int a, b;
    scanf("%d", &N);
    for (i=1; i<=N; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a+b);
    }
}