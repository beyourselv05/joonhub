#include <stdio.h>

//1. 총 금액 X
//2. 구매한 물건의 종류의 수 N
//3. N개의 줄 물건의 가격 a, 개수 b

int main() {
    long long int X;
    int N;
    long long int a, b;
    int sum=0;
    
    scanf("%lld", &X);
    scanf("%d", &N);
    for(int i=0; i<N; i++) {
        scanf("%lld %lld", &a, &b);
        sum += a*b;
    }
    
    if (X == sum) {
        printf("Yes");
    }
    else printf("No");
}