#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool exist = true;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            exist = false;
        }
    }
    if (exist == false){
        printf("NO");
    }
    else{
        printf("YES");
    }

    return 0;
}