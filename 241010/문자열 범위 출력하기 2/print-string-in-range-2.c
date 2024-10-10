#include <stdio.h>

int main() {


    char str[100];
    int n;

    scanf("%s", &str);
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        printf("%c", str[n-i+2]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}