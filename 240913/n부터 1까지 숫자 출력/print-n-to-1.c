#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    i=n;
    while(i>=1){
        printf("%d ", i);
        i--;
    }

    return 0;
}