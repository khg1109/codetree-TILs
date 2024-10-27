#include <stdio.h>
#include <string.h>

int main() {

    char str1[100][100];
    char str2[100][100];

    int n;
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%s", &str1[i]);
    }

    char A;
    
    getchar();

    scanf("%c", &A);

    int cnt = 0;

    char a[1000] = "";

    for(int i = 0; i < n; i++){
        if(str1[i][0] == A){
            strcat(a, str1[i]); 
            cnt++;
        }
    }

    printf("%d %.2f",cnt ,strlen(a)/(double)cnt);




    
    // 여기에 코드를 작성해주세요.
    return 0;
}