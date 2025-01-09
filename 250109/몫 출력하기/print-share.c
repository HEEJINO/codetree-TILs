#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int count=0;
    for(int i=0; i<=100; i++){
        scanf("%d\n", &n);
        if(n % 2 == 0){
            printf("%d\n", n/2);
            count++;
        }    
        if(count == 3){
            break;
        }
    }

    return 0;
}