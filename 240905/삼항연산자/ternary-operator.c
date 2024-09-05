#include <stdio.h>

int main() {
    int score;
    char grade;
    scanf("%d", &score);

    if(score ==100){
        grade = 0;
    }
    else{
        grade = 1;
    }
    //삼항연산자

    (grade==0) ? printf("pass") : printf("failure");

    return 0;
}