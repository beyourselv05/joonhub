#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    
    int layer = 1;    //구간
    int cnt = 1;      
    int range = 6;    
    
    if (n == 1) {
        printf("1");
        return 0;
    }
    
    while (cnt < n) {
        cnt += range;  
        range += 6;    
        layer++;       
    }
    
    printf("%d", layer);
    return 0;
}
