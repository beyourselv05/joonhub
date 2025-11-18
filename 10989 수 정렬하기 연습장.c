//problem solving
//a[i]와 a[i+1]을 비교. (loop) >=시 교체 with temp variable
//교체할때 cnt++;
//만약 다 조사하고 cnt가 0이면 그대로 배열 출력

#include <stdio.h>

int main() {
    int n;
    int temp;
    int cnt;
    
    scanf("%d", &n);
    int a[n] = { };
    
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    
    while(cnt > 0) {
        for(int i=0; i<n; i++) {
            if(a[i] >= a[i+1]) {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                cnt++;
            }
        }
    }
}
