#include <stdio.h>

int main() {
    int n, cnt=0, cnt_p=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i % 4 == 0){
            if((i % 100 == 0)&&(i % 400 != 0))
               cnt_p++;
            else 
                cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}