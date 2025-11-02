// dž -> dz=            // đ -> d-
// č -> c=              // ć -> c-
// ž -> z=              // š -> s=
// lj -> lj             // nj -> nj
// 추가조건 : 위에 없는 알파벳은 한글자씩++
//1. 입력받은 배열을 [0] ~ [n] 까지 조사하고 사이에서 if문으로 전개
//2. 조건 구현 후 일반 알파벳 생각하기.
//3. d,z,c,s,l,n,으로 시작하는건 31행부터 83행까지 구현완료
//4. 나머지 알파벳 또한 cnt++
#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int len;
    int cnt = 0;
    
    scanf("%s", s);
    len = strlen(s);
    
    for(int i=0; i<len; i++) {
        if(s[i] == 'd' || s[i] == 'c' || s[i] == 'z' || s[i] == 's' || s[i] ==  'l' || s[i] == 'n' ) {
            if(s[i] == 'd') {
                if(s[i+1] == 'z' && s[i+2] == '=') {
                        cnt++;
                        i += 2;
                    }
                    else if(s[i+1] == '-') {
                        cnt++;
                        i += 1;
                    }
                    else {
                        cnt++;
                    }
                }
            
            if(s[i] == 'c') {
                if(s[i+1] == '=') {
                    cnt++;
                    i += 1;
                }
                else if(s[i+1] == '-') {
                    cnt++;
                    i += 1;
                }
                else {
                    cnt++;
                }
            }
            
            if(s[i] == 'z') {
                if(s[i+1] == '=') {
                    cnt++;
                    i += 1;
                }
                else {
                    cnt++;
                }
            }
            
            if(s[i] == 's') {
                if(s[i+1] == '=') {
                    cnt++;
                    i += 1;
                }
                else {
                    cnt++;
                }
            }
            
            if(s[i] == 'l') {
                if(s[i+1] == 'j') {
                    cnt++;
                    i += 1;
                }
                else {
                    cnt++;
                }
            }
            
            if(s[i] == 'n') {
                if(s[i+1] == 'j') {
                    cnt++;
                    i += 1;
                }
                else {
                    cnt++;
                }
            }
        }
        else {
            cnt++;
        }
    }
    printf("%d ", cnt);
    return 0;
}

//1i. d dz= z=  3
//2i. n lj j    3
//3i. c= c=     2