#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool typo = false;

    for (int i=2; i<=(n-1); i++){
        if(n % i == 0)
            typo = true;
    }
    //printf("%d\n", typo);
    

    if(typo == true){
        printf("C");}
    else{
        printf("N");
    }
    return 0;
}