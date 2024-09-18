#include <stdio.h>

int main() {
    int a, b, sum_v=0;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(i % 6 ==0 && i % 8 != 0)
            sum_v += i;
    }
    printf("%d", sum_v);

    return 0;
}