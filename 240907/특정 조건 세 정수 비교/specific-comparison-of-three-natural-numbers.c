#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //첫 번째 수가 세 정수의 최솟값과 일치한다면 1 OR 0을 출력
    //세 개의 수가 모두 같으면 1 OR 0을 출력

    if (a == b || a == c)
        printf("1 ");
    else 
        printf("0 ");

    if (a == b && b == c)
        printf("1");
    else
        printf("0");

    return 0;
}