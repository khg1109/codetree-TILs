#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);

    int sum = 0;

    for(int i = 0; i < n; i++){
        int num;
        scanf("%d", &num);
        sum += num;
    }

    char str[10];

    sprintf(str, "%d", sum);

    char str1 = str[0];


    

    int len = strlen(str);

    for(int i = 0; i < len-1; i++){
        str[i] = str[i+1];
    }

    str[len-1] = str1;

    printf("%s", str);


    // 여기에 코드를 작성해주세요.
    return 0;
}