#include <stdio.h>

int main() {
    char xS, yS, zS; //증상
    char emer_x, emer_y, emer_z;
    int xT, yT, zT; //체온

    scanf("%c %d\n", &xS, &xT);
    scanf("%c %d\n", &yS, &yT);
    scanf("%c %d", &zS, &zT);

    if(xT >= 37 || yT >= 37 || zT >= 37){
        if(xS == 'Y' || yS == 'Y' || zS == 'Y'){
            emer_x = 'A';
            emer_y = 'A';
            emer_z = 'A';
        }
        else{
             emer_x = 'B';
             emer_y = 'B';
             emer_z = 'B';
        }
    }
    else{
        if(xS == 'Y' || yS == 'Y' || zS == 'Y'){
             emer_x = 'C';
             emer_y = 'C';
             emer_z = 'C';
        }
        else{
             emer_x = 'D';
             emer_y = 'D';
             emer_z = 'D';
        }
    }

    if(emer_x == 'A'){
        if(emer_y=='A' || emer_z=='A')
            printf("E");
        else if(emer_y=='A' && emer_z=='A')
            printf("E");
        else
            printf("N");
    }
    else if(emer_y == 'A'){
        if(emer_x=='A' || emer_z=='A')
            printf("E");
        else
            printf("N");
    }
    else
        printf("N");


    return 0;
}