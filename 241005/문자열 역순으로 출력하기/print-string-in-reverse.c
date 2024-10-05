#include <stdio.h>

int main() {

   int n = 4;


    char arr[4][20];

    for (int i = 0; i < n; i++){
        scanf("%s", &arr[i]);

    }

    for(int i = 3; i >= 0; i--){
        printf("%s\n", arr[i]);
    }
    
    return 0;
}