#include <stdio.h>
int main() {
    int multiplyer=2, self=3;
    int N;
    
    scanf("%d", &N);
    for(int i=1; i<N; i++) {
        self += multiplyer;
        multiplyer *= 2;
    }
    printf("%d", self*self);
}

//1 2 4 8 16
//1 -> 9        3*3   

//2 -> 25       5*5

//3 -> 81       9*9

//4 ->          17*17

//5 ->          33*33
