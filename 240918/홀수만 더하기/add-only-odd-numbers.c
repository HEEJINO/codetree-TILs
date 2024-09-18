#include <stdio.h>

int main() {
    int a, n, sum_val=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &a);
        if(a % 2 ==1 && a % 3 == 0)
            sum_val += a;
    }
    printf("%d", sum_val);
    return 0;
}