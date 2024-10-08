#include <stdio.h>

int main() {

    char str1[100][100];
    char str2[100][100];

    int n;
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%s", &str1[i]);
    }

    char A;
    
    scanf("%c", &A);
    int cnt = 0;


    for(int i = 0; i < n; i++){
        if(str1[i][0] == A){
            str2[i] = str1[i];
            cnt++;
        }
    }

    for(int i = 0; i < cnt; i++){
        printf("%s\n",str2[i]); 
    }



    
    // 여기에 코드를 작성해주세요.
    return 0;
}