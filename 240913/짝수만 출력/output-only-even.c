#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d", &a, &b);

    i = a;
    while(i<=b){
        if(i % 2 == 0)
            printf("%d ", i);
        i++;
    }
    return 0;
}