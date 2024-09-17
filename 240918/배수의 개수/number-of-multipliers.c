#include <stdio.h>

int main() {
    int a, cnt_3=0, cnt_5=0;
    for(int i=1; i<=10; i++){
        scanf("%d\n", &a);
        if(a % 3 ==0){
            cnt_3++;
        }
        if(a % 5 == 0){
            cnt_5++;
        }
    }
    printf("%d %d", cnt_3, cnt_5);
    return 0;
}