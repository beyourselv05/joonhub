//1i. 할머니가 외운 단어가 주어짐. 
//1o. 다이얼을 걸기위한 최소시간.
//alp 배열에 순서대로 3,3,3,4,4,4,5,5,5, 처럼 요소를 넣음.

#include <stdio.h>
#include <string.h>

int main() {
    int cnt=0;
    int len;
    char str[16] = { 0, };
    int alp[27] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    
    scanf("%s", str);    //string = WA
    len = strlen(str);   //len = 2
    
    //str배열에 있는 AD 숫자로 변환하는 for문
    for(int i=0; i<len; i++) {
        str[i] -= 65; //숫자로 변환  WA -> str [0][1]
    }                                         //22 0  alp 배열 순서와 비교하면 되겠는데?
    
    for(int i=0; i<len; i++) {
        for(int j=0; j<26; j++) {
            if (str[i] == j) { 
                cnt += alp[j]; //1. cnt=10, 2. cnt=3
            }
        }
    }
    printf("%d", cnt);
}

//abc 3초, def 4초, ghi 5초, jkl 6초, mno 7초, pqrs 8초, tuv 9초, wxyz 10초


