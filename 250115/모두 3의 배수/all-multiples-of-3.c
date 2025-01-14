#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int count=0;
    bool typo = false;

    for(int i=1;i<=5;i++){
        scanf("%d\n", &n);
        if(n % 3 == 0){
            count++;
            //printf("3의 배수면: %d\n", count);
        } else {
            //printf("3의 배수가 아니면: %d\n", count);
        }
    }

    if(count==5){
        printf("1");
    } else {
        printf("0");
    }
    
    return 0;
}