//21:48 ~23:30
//최소 이동거리(시작, 끝 포함)
//ex) 13 -> 3개, 58 -> 5개.

#include <stdio.h>

int main() {
    int n;
    int ini=2;                //initial
    int cnt = 7;            //last
    int distance = 1;           //몇개의 방?
    int num_cnt = 0;
    
    scanf("%d", &n);        //7입력
    
    if(n == 1) {
        printf("1");
        return 0;
    }
    
    while(num_cnt < n) {
        for(int j=ini; j<=cnt; j++) {
            num_cnt++;

            if(n == num_cnt+1) {
                distance++;
                printf("%d", distance);
                return 0;
            }
            
            if(j/cnt == 1) {
                cnt += ((distance+1)*6);        //end
                ini += ((distance)*6);          //start
                distance++;
                break;
            }
        }
    }
}
//마지막 진척도 25.11.14(23:32)
//1에서 오류남,7, 19 등에서 오류나는 것을 보면 코드 함수 실행의 순서 잘못인듯?


//2개 start:2   end:7
//3개 start:8   end:19
//4개 start:20  end:37

//1(X), 2,3,4,5,6,7(2가 정답인데 3이 나옴),8... 20(4가 정답인데 3이 나옴.)
//25부터 4가 나옴

//2거리 - 2 ~ 7           6       (한칸씩 더 거리가 추가될수록 끝-시작 값의 범위 횟수가 6씩 커짐)
//3거리 - 8 ~ 19          12
//4거리 - 20 ~ 37         18
//5거리 - 38 ~ 61         24
//6거리 - 62 ~             30
