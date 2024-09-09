#include <stdio.h>

int main() {
    char xS, yS, zS; //증상
    char emer_x, emer_y, emer_z;
    int xT, yT, zT; //체온

    scanf("%c %d\n", &xS, &xT);
    scanf("%c %d\n", &yS, &yT);
    scanf("%c %d", &zS, &zT);

    if(xT >= 37){
        if(xS =='Y')
            emer_x = 'A';
        if(xS == 'N')
            emer_x = 'B';
    }
    else{
        if(xS == 'Y')
            emer_x = 'C';
        if(xS == 'N')
            emer_x = 'D';
    }

    if(yT >= 37){
        if(yS =='Y')
            emer_y = 'A';
        if(yS == 'N')
            emer_y = 'B';
    }
    else{
        if(yS == 'Y')
            emer_y = 'C';
        if(yS == 'N')
            emer_y = 'D';
    }

    if(zT >= 37){
        if(zS =='Y')
            emer_z = 'A';
        if(zS == 'N')
            emer_z = 'B';
    }
    else{
        if(zS == 'Y')
            emer_z = 'C';
        if(zS == 'N')
            emer_z = 'D';
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