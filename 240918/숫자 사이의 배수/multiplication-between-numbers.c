#include <stdio.h>

int main() {
    int a, b;
    int sum=0, cnt=0;
    double aver;
    scanf("%d %d", &a, &b);

    for(int i=a; i<=b; i++){
        if(i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt++;}
    }
    aver = (double)sum / cnt; /*수정전:  aver = sum / cnt; 
    C 언어에서 정수 간의 나눗셈은 결과도 정수로 반환, 
    나눗셈 결과가 실수가 아닌 정수로 처리됩니다. 
    이를 해결하려면 sum이나 cnt 중 하나를 double 타입으로 변환해 
    실수 나눗셈을 하도록 수정해야 합니다. */
    printf("%d %.1lf", sum, aver);

    return 0;
}