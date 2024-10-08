#include <stdio.h>
#include <string.h>

int main() {
    char arr[10][100];

    // 문자열 입력
    for (int i = 0; i < 10; i++) {
        scanf("%s", arr[i]);
    }

    char n;

    // 개행 문자 제거
    getchar();

    // 문자 입력
    scanf("%c", &n);

    // 주어진 문자로 끝나는 문자열 출력
    for (int i = 0; i < 10; i++) {
        int a = strlen(arr[i]);
        if (arr[i][a - 1] == n) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}