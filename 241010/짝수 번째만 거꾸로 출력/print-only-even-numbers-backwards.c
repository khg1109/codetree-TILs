#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // 문자열 입력
    scanf("%s", str);
    
    char evenChars[100]; // 짝수 번째 문자를 저장할 배열
    int evenCount = 0;

    // 짝수 번째 문자만 추출
    for (int i = 0; i < strlen(str); i++) {
        if (i % 2 == 0) {
            evenChars[evenCount] = str[i];
            evenCount++;
        }
    }

    // 짝수 번째 문자를 역순으로 출력
    for (int i = evenCount - 1; i >= 0; i--) {
        printf("%c", evenChars[i]);
    }

    return 0;
}