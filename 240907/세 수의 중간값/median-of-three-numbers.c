#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    (b > a && b < c) ? printf("1") : printf("0");
    return 0;
}