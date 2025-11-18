#include <stdio.h>
int arr[10001];
int main() {
    int n;
    scanf("%d", &n);
    int index;
    
    for(int i=0; i<n; i++) {
        scanf("%d", &index);
        arr[index]++;
    }
    
    for(int i=1; i<10001; i++) {
        for(int j=0; j<arr[i]; j++) {
            printf("%d\n", i);
        }
    }
}

//메모리, 시간이 한정적임. -> 버블정렬 사용 XX
