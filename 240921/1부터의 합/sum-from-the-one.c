#include <stdio.h>

int main() {
    int n, i, sum_val=0;
    scanf("%d", &n);

    for(i=1; i<=100; i++){
        sum_val += i;
        if(sum_val >= n)
            break;
    }
    printf("%d", i);

    return 0;
}