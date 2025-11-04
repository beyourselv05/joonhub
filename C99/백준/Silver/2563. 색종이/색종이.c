//critical. 최종값은 (n*100-겹치는부위)만 구해주면 됨.
//1. 100*100 배열을 숫자 0으로 모두 초기화
//2. 입력받은 색종이 수만큼 반복
//3. 입력받은 숫자부터 2차원배열 점화식 이중for문 시작. 각배열에 1로 값 넣기
//4. 만약 값에 0이 아닌 1이 존재시 카운트++

#include <stdio.h>
int main() {
    int n, m;
    int sql;          //정사각형
    int cnt=0;
    int arr[100][100] = { 0, };
    
    scanf("%d", &sql);
    
    for(int i=0; i<sql; i++) {
        scanf("%d %d", &n, &m);
        for(int j=n; j<n+10; j++) {
            for(int k=m; k<m+10; k++) {
                if(arr[j][k] == 0) {
                    arr[j][k] = 1;
                }
                else if(arr[j][k] == 1) {
                    cnt++;                  
                }
            }
        }
    }
    printf("%d", sql*100-cnt);
}