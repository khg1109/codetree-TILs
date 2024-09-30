#include <stdio.h>

int main() {
    int arr[100];

    int cnt = 0;

    while(1){    
        scanf("%d", &arr[cnt]);
        if((arr[cnt] == 999) || (arr[cnt] == -999)){
            break;
        }
        cnt++;
    } 
    int maxNum = arr[0];
    int minNum = arr[0];

    for(int i = 0; i < cnt; i++){
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }
        if(minNum > arr[i]){
            minNum = arr[i];
        }
    }


    printf("%d %d", maxNum, minNum);


    // 여기에 코드를 작성해주세요.
    return 0;
}