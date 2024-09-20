#include <stdio.h>

int main() {
    int n, cnt=0;
    scanf("%d", &n);

    for(int i=1; i<=50; i++){
        n /= i;
        cnt++;
        if(n <= 1)
            break;
    }
    printf("%d", cnt);

    return 0;
}