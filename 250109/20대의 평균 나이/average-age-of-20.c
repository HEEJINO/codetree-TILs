#include <stdio.h>

int main() {
    int age;
    float sum = 0, aver=0; //float로 정의해놓지 않으면 while문 안에 코드를 잘 짜도 0.00으로 최종 출력됨
    int count = 0;

    while(1){
        scanf("%d\n", &age);
        if( age >= 30 || age < 20){
            break;
        }
        count++;
        sum += age;
    }

    aver = sum / count;
    //printf("%d %d", count, sum);
    printf("%.2f", aver); 

    return 0;
}
    
