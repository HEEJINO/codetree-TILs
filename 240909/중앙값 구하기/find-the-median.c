#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if((b>a && c>a) || (a>c && c>b))
        printf("%d", c);
    else if((b>a && c<a) || (c>a && a>b))
        printf("%d", a);
    else    
        printf("%d", b);

    return 0;
}