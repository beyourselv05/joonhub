//strcmp 함수 배우기

#include <stdio.h>
#include <string.h>

int main() {
    char a[10];
    char b[10];
    char temp;
    scanf("%s %s", a, b);
    
    temp = a[0];
    a[0] = a[2];
    a[2] = temp;
    
    temp = b[0];
    b[0] = b[2];
    b[2] = temp;
    
    if(strcmp(a, b) > 0) {
        printf("%s", a);
    }
    else if (strcmp(a, b) < 0) {
        printf("%s", b);
    }
}

//734 893
//437 398
// 437
//strcmp(string1, string2)

//<반환>
//str1=str2 -> 0, str1<str2 -> <0, str1>str2 -> >0