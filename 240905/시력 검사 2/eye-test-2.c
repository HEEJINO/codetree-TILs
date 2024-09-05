#include <stdio.h>

int main() {
    double a; //양쪽 눈 시력의 평균값 a
    scanf("%lf", &a);
    
    if(a >= 1.0){
        printf("High");
    } else if(a >= 0.5){
        printf("Middle");
    } else {
        printf("Low");
    }

    return 0;
}