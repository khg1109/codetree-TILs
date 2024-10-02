#include <stdio.h>

int main() {
    
    int n,m;

    scanf("%d %d", &n, &m);
    
    int arr[100][100] = {0};
    int cnt = 0;



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           arr[i][j] = cnt;
           cnt++;
           printf("%d", arr[i][j]);
        }
        printf("\n");

    }

    return 0;
}