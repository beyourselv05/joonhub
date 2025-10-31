//첫째줄 숫자 개수N, 둘째줄 숫자 N
//https://develop247.tistory.com/22#google_vignette
//문자열 1 2는 %s로 출력하면 1,2고 %d로 출력하면 49,50
//정수형 계산시 문자열1 + 문자열2 = 49 + 50 = 99
//문자 0이 정수형으로 48.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char num[n];
    int sum = 0;
    
    scanf("%s", num);   //문자열로 입력받기.
    for(int i=0; i<n; i++) {
        sum = sum + num[i] - '0';     //문자열5는 정수형으로 53
    }                           // 0 <= 53 - 48. sum에 정수형으로 합을 구함
    printf("%d", sum);
}
