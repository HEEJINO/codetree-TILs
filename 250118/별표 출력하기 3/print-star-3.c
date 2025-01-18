#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        // space 
        for (int j=0; j<i; j++){
            printf("  ");
        }

        // star
        for (int j=1; j<(2*n)-(2*i); j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}