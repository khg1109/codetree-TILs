#include <stdio.h>
#include <string.h>

int main() {


    int n;
    char str[1001];

    scanf("%d", &n);
    scanf("%s", str);

    int sum = 0;

    for(int i = 0; i < n; i++){
        char str_n[1001];
        
        scanf("%s", str_n);
        if(strcmp(str,str_n) == 0){
            sum++;
        }
    }


    printf("%d", sum);

    // 여기에 코드를 작성해주세요.
    return 0;
}