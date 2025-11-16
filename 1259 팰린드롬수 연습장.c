//팰린드롬수 -> yes, != -> no.
// + 0 입력시 프로그램 종료
//조사시 팰린드롬이 아니라면 drom수 0, 이라면 drom수 1

#include <stdio.h>
#include <string.h>

int main() {
    
    char str[100000];
    
    while(str[0] != '0') {
        scanf("%s", str);
        
        if(str[0] == '0') {
                break;
            }
        int drom = 1;
        if(drom == 1) {    
            for(int i=0; i<strlen(str)/2; i++) {
                if(str[i] == str[strlen(str)-i-1]) {
                    drom = 1;
                }
                else {
                    drom = 0;
                }
            }
        }
        if(drom == 1) {
            printf("yes\n");
        }
        else if(drom == 0) {
            printf("no\n");
        }
    }
}

//s[0] <-> s[4]
//s[1] <-> s[3]
//s[2] ?
