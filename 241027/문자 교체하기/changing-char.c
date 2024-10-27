#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.



    char str1[100];
    char str2[200];

    scanf("%s", str1);
    scanf("%s", str2);

    str2[0] = str1[0];
    str2[1] = str1[1];

    
    printf("%s",str2);



    
    return 0;
}