#include <stdio.h>

int main() {
    int n;
    int count=0;

    scanf("%d", &n);

    while(1){
        if (n % 2 == 0){
            n = 3 * n + 1;
            count++;
        }
        else{
            n = 2 * n + 2;
            count++;
        }

        if(n >= 1000){
            break;
        }
    }
    printf("%d", count);
    return 0;
}