//solve key
//일단 42로 나눈 값을 배열에 재대입.
//반복을 하고 카운트를 셈. 카운트가 하나일경우 카운트를 범위로 문제해결.
//n[0] ~ n[9];
//이건 내가 직접 꼭푼다.

#include <stdio.h>

unsigned int n[1000] = { 0 };
int count = 0;

int main() {
    for(int i=0; i<10; i++) {
        scanf("%d", &n[i]);
        n[i] %= 42;
    }
#if 0    
    //j값 *10
    for(int i=0; i<10; i++) {       //j를 뒤의 값들과 비교 후 같으면 카운트
        for(int j=i+1; j<10; j++) {   
            if(n[j] == n[i]) {  
                count++;   
            }
        }
    }
    
    for(int i=0; i<10; i++) {       //j를 전체 값들과 비교 후 j외 없다면 카운트
        for(int j=0; j<10; j++) {
            if(n[j] == n[i]) {
                semi_count++;
            }
        }
        if(semi_count == 1) {
            count++;
            printf("%d\n", semi_count);
        }
    }
#endif

    for(int i=0; i<10; i++) {
        int semi_count = 0;
        for(int j=0; j<i; j++) {
            if(n[i] == n[j]) {
                semi_count++;
                break;
            }
        }
        if(semi_count == 0) count++;
    }
    

    printf("%d\n", count);
}

//39, 40, 41, 0 , 1, 2, 40, 41, 0, 1    (나머지)
//n[0]                            n[9]
//(semi_count값) 0 0 0 0 0 0 1 1 1 1
//순서대로 count++, 만약 이전에 저장했다면 건너뜀.
//semi_count가 

#if 0
    for(int i=0; i<10; i++) {       //j를 뒤의 값들과 비교 후 j외 없다면 카운트
        for(int j=; j<10; j++) {
            if(n[j])
        }
    }
    
                
                break;
            }
            
#endif
