#include <stdio.h>

int main() {
    int mid, last;
    scanf("%d %d", &mid, &last);

    if(mid >= 90){
        if(last >= 95)
            printf("100000");
        else if (last >= 90)
            printf("50000");
        else
            printf("0");
    }
    else 
        printf("0");

    return 0;
}