#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool prim = false;

    for(int i=2; i<=(n-1); i++){
        if(n % i == 0)
            prim = true;
    }

    if(prim == true){
        printf("C");
    } else {
        printf("P");
    }
    return 0;
}