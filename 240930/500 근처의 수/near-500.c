#include <stdio.h>

int main() {
    int arr[10] = {0};

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    } 

    int maxNum = 1;
    int minNum = 1000;



    for(int i = 0; i < 10; i++){

        if(arr[i] < 500){
            if(maxNum < arr[i]){
                maxNum = arr[i];


            }
        }
        else{
            if(minNum > arr[i]){
                minNum = arr[i];

            }
        }

    }

    printf("%d %d", maxNum, minNum);


    return 0;
}