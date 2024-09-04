#include <stdio.h>

int main() {
    int wid, len;
    scanf("%d %d", &wid, &len);

    wid += 8;
    len *= 3;

    printf("%d\n", wid);
    printf("%d\n", len);
    printf("%d", wid*len);
    return 0;
}