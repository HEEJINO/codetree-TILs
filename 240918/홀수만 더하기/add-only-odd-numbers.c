#include <stdio.h>

int main() {
    int n, sum_val=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(i % 2 ==1 && i % 3 == 0)
            sum_val += i;
    }
    printf("%d", sum_val);
    return 0;
}