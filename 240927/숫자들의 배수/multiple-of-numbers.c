#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    int cnt = 0;
    int cnt2 = 0;

    while(1){
        cnt ++;
        printf("%d ", n*cnt);

        if((n*cnt) % 5 == 0){
            cnt2++;
            if(cnt2 == 2){
                break;
            }
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}