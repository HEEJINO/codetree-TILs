#include <stdio.h>

int main() {
    int n, sum=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        int a;
        scanf("%d\n", &a);
        sum += a;
    }
    printf("%d %.1f", sum, (float)sum/n);

    return 0;
}