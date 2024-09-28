#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.

    int arr[100];
    int cntArr[10] = {0,};

    int cnt = 0;

    while(1){

        int n;
        scanf("%d", &n);

        if(n == 0){
            break;
        }

        n /= 10;
        arr[cnt] = n;
        cnt++;
    }



    for(int i = 0; i < cnt; i++){
        cntArr[arr]++;
        printf("%d ", cntArr[i]);
         
    }




    return 0;
}