#include <stdio.h>

int main() {
    
    int n,m;

    scanf("%d %d", &n, &m);
    
    int arr[100][100] = {0};
    int cnt = 0;


    
    for (int i = 0; i < m; i++){

        if(i % 2 == 0){
            for(int j = 0; j < n; j++){
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else{
            for(int j = 0; j < n; j++){
                arr[n-1-j][i] = cnt;
                cnt++;
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}