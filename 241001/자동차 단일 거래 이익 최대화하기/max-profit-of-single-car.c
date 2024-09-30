#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[1000] = {0};


    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    int gap = 0;
    int max = 0;

    
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            
            if(arr[i] < arr[j]){
                gap = arr[j] - arr[i];
                

                if(max < gap){
                    max = gap;
                }
            }

            
        }
    
    }


    printf("%d", max);



    return 0;
}