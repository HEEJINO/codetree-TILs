#include <stdio.h>

int main() {
    int N;
    int n=1, x=1;
    scanf("%d", &N);

    while(N != n){
        n *= 2;
        if(N == n){
            break;
        }
        else{
            x++;
        }
    } 
    printf("%d", x);
    return 0;
}