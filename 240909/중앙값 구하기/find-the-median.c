#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(b > a){
        if(a > c)
            printf("%d", a);
        else 
            printf("%d", c);
    }
    else if(c > a){
        if(a > b)
            printf("%d", a);
        else
            printf("%d", b);
    }
    else{
        if(b > c)
            printf("%d", b);
        else 
            printf("%d", c);
    }

    return 0;
}