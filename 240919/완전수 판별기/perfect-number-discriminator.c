#include <stdio.h>

int main() { //완전수 
    int n, sum=0;
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
        printf("P");
    
    else
        printf("N");

    return 0;
}