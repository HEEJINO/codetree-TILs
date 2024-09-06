#include <stdio.h>

int main() {
    int a_math, a_eng, b_math, b_eng;

    scanf("%d %d", &a_math, &a_eng);
    scanf("%d %d", &b_math, &b_eng);

    printf("%d", a_math > b_math && a_eng > b_eng);

    return 0;
}