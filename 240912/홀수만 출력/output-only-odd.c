#include <stdio.h>

int main() {
    int a,b,n;
    scanf("%d %d", &a, &b);
    for(int i=a; i<=b; i++){
        if(n % 2 == 1)
            printf("%d ", n);
    }
    return 0;
}