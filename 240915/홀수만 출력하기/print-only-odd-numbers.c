#include <stdio.h>

int main() {
    int n;
    scanf("%d\n", &n);
    

    for(int a=1; a<=n; a++){
        int i;
        scanf("%d\n", &i);
        if((i % 2 == 1) && (i % 3 ==0))
            printf("%d\n", i);
    }
    return 0;
}