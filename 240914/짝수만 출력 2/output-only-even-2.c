#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &b, &a);

    int i = b;
    while(i >= a){
        if(i % 2 == 0)
            printf("%d ", i);
        i--;
    }
    return 0;
}