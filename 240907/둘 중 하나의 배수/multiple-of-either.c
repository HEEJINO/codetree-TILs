#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    (a % 3 == 0 || a % 5 == 0) ? printf("1") : printf("0");

    return 0;
}