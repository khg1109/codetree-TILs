#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    char arr[100][100];

    for(int i = 0; i < n; i++){
        scanf("%s", &arr[i]);


        printf("%s\n", arr[i]);

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}