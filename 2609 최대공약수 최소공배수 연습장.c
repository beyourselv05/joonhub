//x=24, y=18
//<최대공약수 6>
//24(1,2,3,4,6,8,12,24)
//18(1,2,3,6,9,18)

//<최소공배수 72>
// 24 48 72
// 18 36 54 72
#include <stdio.h>

int Euclidean(int a, int b) {
    if(b==0) {
        return a;
    }
    else {
        return Euclidean(b, a%b);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d %d", Euclidean(x, y));
    printf("%d", 18%24);
}
