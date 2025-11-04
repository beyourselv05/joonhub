//전공평점 : (학점*과목평점)의 합 /학점의 총합
//예제1시 190.5/(18*3+1*4+0*1) = 3.284483 - p,f제외
//1.등급을 숫자로 변환
//2.입력 모두 받은 후 숫자,학점 곱한거 다 더하기, 나누기
//3. p,f 고려.
//
#include <stdio.h>
int main() {
    char subject[21];               //과목
    float score[21];                //학점
    char grade[2];                  //등급
    int i;
    float sum=0;
    float sumscore;
    
    for(i=0; i<20; i++) {
        float cnt=0;
        scanf("%s %f %s", subject, &score[i], grade);   //object 3.0 A+
        
        if(grade[0] == 'P') {
            continue;
        } 
        
        sumscore += score[i];
        
        if(grade[0] == 'F') {
            continue;
        }
        
        if(grade[0] == 'A') {
            if(grade[1] == '+') {
                cnt += 4.5;
            }
            else if(grade[1] == '0') {
                cnt += 4.0;
            }
        }
        
        if(grade[0] == 'B') {
            if(grade[1] == '+') {
                cnt += 3.5;
            }
            else if(grade[1] == '0') {
                cnt += 3.0;
            }
        }
        
        if(grade[0] == 'C') {
            if(grade[1] == '+') {
                cnt += 2.5;
            }
            else if(grade[1] == '0') {
                cnt += 2.0;
            }
        }
        
        if(grade[0] == 'D') {
            if(grade[1] == '+') {
                cnt += 1.5;
            }
            else if(grade[1] == '0') {
                cnt += 1.0;
            }
        }
        
        sum += cnt*score[i];
    }
    printf("%f", sum/sumscore);
}