//팰린드롬수 -> yes, != -> no.
// + 0 입력시 프로그램 종료

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100000];
    scanf("%s", str);
    for(int i=0; i<strlen(str)/2; i++) {
        if(str[i] == str[strlen(str)-i-1]) {
            printf("yes");
        }
    }
}

//s[0] <-> s[4]
//s[1] <-> s[3]
//s[2] ?
