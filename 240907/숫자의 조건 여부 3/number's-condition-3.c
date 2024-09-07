#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    (a % 13 == 0|| a % 19 == 0) ? printf("True") : printf("False");
    return 0;
}