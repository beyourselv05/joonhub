#include <stdio.h>
#include <string.h>

int main() {
    int N, M;
    int max=1;

    scanf("%d %d", &N, &M);                 //카드개수N, M에 가깝게만들기
    int arr[100] = {0};
    
    for(int i=0; i<N; i++) {                //각 배열에 N개의 수 순서대로 대입
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<N; i++) {                                                            //3번째카드조사
        for(int j=0; j<N; j++) {                                                        //2번째카드조사
            for(int k=0; k<N; k++) {                                                    //1번째카드조사
                int sum = arr[k] + arr[j] + arr[i];
                if(sum <= M) {
                    if(max < sum) {
                        if(arr[k] != arr[j] && arr[j] != arr[i] && arr[i] != arr[k]) {  //같은카드 제외
                            max = sum;
                        }
                    }
                }
            }
        }
    }
    printf("%d", max);
}