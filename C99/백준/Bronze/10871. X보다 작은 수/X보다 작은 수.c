#include <stdio.h>

int main() {
    int N, X;
    int arr;
    
    scanf("%d %d", &N, &X);
    for(int i=0; i<N; i++) {
        scanf("%d", &arr);
        if (arr < X) {
        printf("%d ", arr);
        }
    }
}