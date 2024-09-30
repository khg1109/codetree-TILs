#include <stdio.h>
#include <stdbool.h>

int main() {


    int n;
    scanf("%d", &n);
    int arr[100];
    int maxDex = 0;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    bool inspection = true;

    int max = arr[0];
    int a = 0;

    while(inspection){
        inspection = false;
        for(int i = 0; i < n -a; i++){
            if(max < arr[i]){
                max = arr[i];
                maxDex = i;
                inspection = true;
            }
            
            //printf("인덱스: %d %d %d\n", i,max,maxDex);
        }
        max = arr[0];
        a = n - maxDex;
        printf("%d ", maxDex+1);
        maxDex = 0;
        
    }
    return 0;
}