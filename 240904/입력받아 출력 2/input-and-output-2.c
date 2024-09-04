#include <stdio.h>

int main() {
    int a, b;

    scanf("%d-%d", &a, &b);
    printf("%d%d", a, b); //왜 string으로는 안 되는지??
    return 0;
}