#include <stdio.h>

int main() {
    int X;
    int N;
    int a, b;
    int sum=0;
    
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
}