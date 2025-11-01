#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);    
    char R[T];
    int multi=0;
    
    for(int i=0; i<T; i++) {
        scanf("%d %s", &multi, R);
        for(int j=0; j<strlen(R); j++) {
            for(int k=0; k<multi; k++) {
                printf("%c", R[j]);
            }
        }
        printf("\n");
    }
    
}