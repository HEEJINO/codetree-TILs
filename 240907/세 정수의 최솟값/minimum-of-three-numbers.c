#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);// 1 1 2 최솟값이 1인 경우

    int v;

    //1 2 3
    (a <= b && a <= c) ? printf("%d", a) : b; //1 2 3 a가 가장 작은 경우라면
    (a > b && b <= c) ? printf("%d", b) : c; // 2 1 3 b가 가장 작은 경우
    (b > c && a > c) ? printf("%d", c) : a; // 3 2 1 c가 가장 작은 경우

    return 0;
}