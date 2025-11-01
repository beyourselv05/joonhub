#include <stdio.h>
#include <string.h>

int main() {
    
    char s[101];
    scanf("%s",s);
    int n[26];
    int index;
    
    for(int i=0; i<26; i++) {
        n[i] = -1;
    }
    
    for(int i=0; i<strlen(s); i++) {
        index = s[i] - 'a';
        if (n[index] == -1) {
            n[index] = i;
        }
    }

    for(int i=0; i<26; i++) {
        printf("%d ", n[i]);
    }
}

//baekjoon
//s[0] = b, s[1] = a