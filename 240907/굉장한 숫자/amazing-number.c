#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);

    (((n % 2 == 1) && (n % 3 == 0)) || ((n % 2 == 0) && (n % 5 == 0))) ? printf("true") : printf("false");

    return 0;
}