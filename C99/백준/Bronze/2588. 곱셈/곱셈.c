#include <stdio.h>

int main() {
    
    int num1, num2;
    int a, b, c;
    
    scanf("%d\n", &num1);
    scanf("%d", &num2);
    
    a = num2%10;        //(2) - 1digits
    b = num2%100/10;    //(2) = 2digits
    c = num2/100;       //(3) - 3digits
    
    printf("%d\n", num1 * a);
    printf("%d\n", num1 * b);
    printf("%d\n", num1 * c);
    printf("%d", num1 * num2);
}