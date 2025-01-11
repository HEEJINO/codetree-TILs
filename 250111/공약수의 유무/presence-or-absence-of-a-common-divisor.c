#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    bool exist = false;

    for(int i=a; i<=b; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            exist = true;
        }
    }

    if(exist == true){
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}