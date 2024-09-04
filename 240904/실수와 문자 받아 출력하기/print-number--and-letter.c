#include <stdio.h>

int main() {
    double a, b;
    char c[150];

    scanf("%s", c);
    scanf("%lf\n%lf", &a, &b);

    printf("%s\n", c);
    printf("%.2lf\n%.2lf", a, b);
    return 0;
}