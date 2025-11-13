#include <stdio.h>

int main() {
    int N;      // N=216
    
    scanf("%d", &N);
    
    for(int i=1; i<N; i++) { 
        
        int sum = i;            //if 198
        int temp = i;           //if 198
        
        while (temp > 0) {     //각 요소 더하는 기능 ex)1+9+8
            sum += temp%10;
            temp /= 10;
        }
        
        if(sum == N) {          // 198 == 216임. 또한 이 과정이 실행되면 0이 아닌 정수 출력.
            printf("%d", i);    // 실행하면 N값 216을 0으로 초기화 시켜버리고 for문 밖에서
            N = 0;              // N이 0이 아니라면 (32행 if문이 실행안됨) 0을 출력함.
            break;              // 0이 아니라는 것은 분해합을 생성자를 못찾았기 때문.
        }                       
    }
    if(N!=0) {
        printf("0");
    }
}