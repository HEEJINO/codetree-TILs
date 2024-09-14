#include <stdio.h>

int main() {
    int a, n;
    scanf("%d %d", &a, &n);
    int i = 1;
    while(i<=n){
        a += n;
        printf("%d\n", a);
        i++;
    }
    return 0;
}