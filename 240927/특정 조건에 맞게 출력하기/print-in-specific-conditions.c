#include <stdio.h>

int main() {


    int arr[100];

    int cnt = 0;

    while(1){
        scanf("%d", &arr[cnt]);
    
        if(arr[cnt] == 0){
            break;
        }
        cnt++;

    }



    for(int i = 0; i < cnt; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i] /= 2);
        }
        else{
            printf("%d ", arr[i] += 3);
        }

    }



    // 여기에 코드를 작성해주세요.
    return 0;
}