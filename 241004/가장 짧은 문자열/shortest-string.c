#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char str3[100];


    scanf("%s %s %s", &str1, &str2, &str3);

    int arr[3];

    arr[0] = strlen(str1);
    arr[1] = strlen(str2);
    arr[2] = strlen(str3);


    for(int i = 0; i < 3-1 ; i++){
        for(int j = 0; j < 3-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }
    printf("%d", arr[2]- arr[0]);




    return 0;
}