#include <stdio.h>

int main() {
    int a, sum=0, cnt=0;
    for(int i=1; i<=10; i++){
        scanf("%d\n", &a);
        if(a >= 0 && a <= 200){
            sum += a;
            cnt++;
        }
    }
    printf("%d %.1f", sum, (float)sum/cnt);


    return 0;
}