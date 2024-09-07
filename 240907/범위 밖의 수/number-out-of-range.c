#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    (a < 10 || a > 20) ? printf("yes") : printf("no"); 
    return 0;
}