#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        // space
        for (int j=(n-i)-1; j>0; j--){
            printf("  "); //space 2칸
        }
        for (int j=0; j<(2*i+1); j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}