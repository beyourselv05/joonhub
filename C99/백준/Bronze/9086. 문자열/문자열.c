#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char s[100];  
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s", &s);
        printf("%c%c\n", s[0], s[strlen(s)-1]);
    }
}