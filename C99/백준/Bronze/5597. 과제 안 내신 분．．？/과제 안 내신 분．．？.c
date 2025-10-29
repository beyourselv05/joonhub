//key. 28개가 입력되는데 2개만 0임, 0찾기.

#include <stdio.h> 

int main() {
    int student[31] = { 0 };
    int num;
    
    for(int i=0; i<28; i++) {
        scanf("%d", &num);
        student[num] = num;
    }
    
    for(int i=1; i<31; i++) {
        if(student[i] == 0) printf("%d\n", i);
    }
}

//11행까지 진행 ->
//{0,0,0,0,0 --- ,0,0}

//16행까지 진행 ->
//student[0] = 3
//student[1] = 1
//student[2] = 4