#include <stdio.h>

//N번 바구니(개), M번 공 바꾸기

int main() {
    int N, M;
    int arr[100] = {0, };
    int s, e = 0;
    int t;
    
    scanf("%d %d", &N, &M);
    
    for(int i=1; i<=N; i++) {
        arr[i-1] = i;
    }
    
    for(int i=0; i<M; i++) {
        scanf("%d %d", &s, &e); //s=1; e=2;
        t = arr[s-1];
        arr[s-1] = arr[e-1];
        arr[e-1] = t;
    }
    for(int i=0; i<N; i++) {
        printf("%d ", arr[i]);
    }
}

//1. 1 2 3 4 5  (1 2) 2 1 3 4 5
//2. 2 1 3 4 5  (3 4) 2 1 4 3 5
//3. 2 1 4 3 5  (1 4) 3 1 4 2 5
//4. 3 1 4 2 5  (2 2) 3 1 4 2 5