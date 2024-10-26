#include <stdio.h>

int main() {
    int a, b;
    char ch;
    
    while(1){
        scanf("%d %d %c\n", &a, &b, &ch);
        if(ch != 'C'){
            printf("%d\n", a*b);
        }
        else{
            printf("%d\n", a*b);
            break;
        }
        break;
    }

    return 0;
}