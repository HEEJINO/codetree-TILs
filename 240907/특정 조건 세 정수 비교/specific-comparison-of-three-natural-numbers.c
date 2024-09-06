#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //a가 첫번째 수
    if(a <= b && a <= c) //a가 최솟값인 경우
        printf("1");
    else if(a <= b && a < c) //b가 최솟값인 경우
        printf("1");
    else if(a < b && a <= c) //c가 최솟값인 경우
        printf("1");
    else
        printf("0");

    if (a == b && b ==c)
        printf(" 1");
    else 
        printf(" 0");

    return 0;
}