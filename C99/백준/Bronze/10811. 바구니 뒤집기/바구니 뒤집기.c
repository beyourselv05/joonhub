#include <stdio.h>

int main() {
    int i, p, s, e;
    int arr[100];
    int n, m;
    
    scanf("%d %d", &n, &m);
    
    for(i=0; i<n; i++) {        //각 배열에 순서대로 요소 삽입.
        arr[i] = i+1;
    }
    
    for(p=0; p<m; p++) {
        scanf("%d %d", &s, &e);
        for(int j=0; j<(e-s)/2+1; j++) {
            int temp = arr[s+j-1];
            arr[s+j-1] = arr[e-j-1];
            arr[e-j-1] = temp;
        }
    }
    
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}