#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int *x = &a;
    int *y = &b;
    int minus = abs(*x - *y);
    printf("%d", minus);   
    return 0;
}
