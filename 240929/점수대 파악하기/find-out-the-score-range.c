#include <stdio.h>

int main() {


    int arr[100];
    int cntArr[11] = {0,};

    int cnt = 0;
    while(1){

        int n;
        scanf("%d", &n);

        if(0 == n){
            break;
        }

        arr[cnt] = n;
        cnt++;
    }

    for(int i = 0; i < cnt; i++){
        cntArr[arr[i]/10]++;
    }

    for(int i = 10; i > 0; i--){
        printf("%d - %d\n" ,i*10,cntArr[i]);

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}