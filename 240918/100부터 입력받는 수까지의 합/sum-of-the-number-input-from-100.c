#include <stdio.h>

int main() {
    int n, sum_val=0;
    scanf("%d", &n);

    for(int i=n; i<=100; i++){
        sum_val += i;
    }
    printf("%d", sum_val);
    return 0;
}