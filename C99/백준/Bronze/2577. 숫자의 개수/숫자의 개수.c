#include <stdio.h>
#include <string.h>

int main() {
    int a,b,c;
    int multi;
    int n[10] = {0};   
    int result;
    
    scanf("%d", &a);            
    scanf("%d", &b);
    scanf("%d", &c);
    
    multi = a*b*c;              //17037300
    
    while(multi > 0) {
        result = multi%10;  //맨오른쪽 수 추출
        n[result]++;
        multi /= 10;
    }
    
    for(int i=0; i<10; i++) {
        printf("%d\n", n[i]);
    }
}