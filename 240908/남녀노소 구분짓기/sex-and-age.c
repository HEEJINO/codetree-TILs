#include <stdio.h>

int main() {
    int sex, age;
    scanf("%d\n%d", &sex, &age);

    if(age >= 19){
        if(sex == 1)
            printf("WOMAN");
        else
            printf("MAN");
    }
    else {
        if(sex == 1)
            printf("GIRL");
        else
            printf("BOY");
    }
    return 0;
}