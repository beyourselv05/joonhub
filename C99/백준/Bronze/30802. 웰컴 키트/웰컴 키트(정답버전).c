//23
//3 1 4 1 5 9
//5 5 5 5 5 10
//5 7

#include <stdio.h>
int main() {
    int n,t,p;
    int s, m, l, xl, xxl, xxxl;
    scanf("%d", &n);
    scanf("%d %d %d %d %d %d", &s, &m, &l, &xl, &xxl, &xxxl);
    scanf("%d %d", &t, &p);
    
    int bundle=0;
    int size[6] = {s, m, l, xl, xxl, xxxl};
    for(int i=0; i<6; i++) {
        bundle += (size[i] + t - 1) / t;            //이렇게 하면 딱 나눠떨어질때 몫만 나옴(5,5)
    }                                               //나머지가 조금이라도 있으면 자동으로 1 더함
    
    printf("%d\n%d %d", bundle, n/p, n%p);
}
