#include <stdio.h>

int main() {
    int N;
    int count = 0;

    scanf("%d", &N);

    while(1){
        if(N % 2 == 0){
            N = N / 2;
            count++;
        }
        else if (N == 1){
            break;
        }
        else {
            N = N * 3 + 1;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}