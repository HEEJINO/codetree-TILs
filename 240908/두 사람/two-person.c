#include <stdio.h>

int main() {
    int a_age, b_age;
    char a_sex, b_sex;
    scanf("%d %c\n", &a_age, &a_sex);
    scanf("%d %c", &b_age, &b_sex);

    if(a_age >= 19 || b_age >= 19)
        if(a_sex == 'M' || b_sex == 'M')
            printf("1");
        else
            printf("0");
    else
        printf("0");

    return 0;
}