#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    //2월=28일, 1,3,5,7,8,10,12=31일, 4,6,9,11= 30일
    if(n==4 || n==6 || n==9 || n==11)
        printf("30");
    else if(n==2)
        printf("28");
    else
        printf("31");

    return 0;
}