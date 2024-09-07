#include <stdio.h>

int main() {
    int a_math, a_eng, b_math, b_eng;
    scanf("%d %d\n", &a_math, &a_eng);
    scanf("%d %d", &b_math, &b_eng);

    if(a_math == b_math){
        if(a_eng > b_eng)
            printf("A");
        else
            printf("B");
    }
    else if (a_math > b_math)
        printf("A");
    else    
        printf("B");

    return 0;
}