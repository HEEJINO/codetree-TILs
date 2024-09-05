#include <stdio.h>

int main() {
    char alp;
    scanf("%c", &alp);

    if(alp == 'S')
        printf("Superior");
    else if(alp == 'A')
        printf("Excellent");
    else if(alp =='B')
        printf("Good");
    else if(alp == 'C')
        printf("Usually");
    else if(alp == 'D')
        printf("Effort");
    else 
        printf("Failure");

    return 0;
}