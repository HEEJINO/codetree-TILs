#include <stdio.h>

int main() {
    int n;
    int cnt_class=0, cnt_pass=0, cnt_toil=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i % 12 == 0) //12로 나눠지는 수
            cnt_toil++;
        else if((i % 3 == 0 && i % 2==0) || i % 3 == 0) //주기 더 긴 3일 청소
            cnt_pass++;
        else if(i % 2 == 0) //2일마다 교실청소
            cnt_class++;
        else
            continue;
    }
    printf("%d %d %d", cnt_class, cnt_pass, cnt_toil);

    return 0;
}