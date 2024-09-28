#include <stdio.h>

int main() {
    
    int arr[10];
    int cntArr[7] = {0,};

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }


    for(int i = 0; i < 10; i++){
        cntArr[arr[i]]++;
    }


    for(int i = 1; i < 7; i++){
        printf("%d - %d\n",i,cntArr[i]);

    }
    return 0;
}