#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {

    char str1[10];
    char str2[10];


    scanf("%s %s", str1, str2);


    char num1[10];
    char num2[10];

    int cnt1 = 0;
    int cnt2 = 0;

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    for(int i = 0; i < len1; i++){
        
        if(str1[i] >= '0' && str1[i] <= '9'){
            num1[cnt1] = str1[i];
            cnt1++;
        }   
    }
    num1[cnt1] = '\0';


    for(int i = 0; i < len2; i++){
        
        if(str2[i] >= '0' && str2[i] <= '9'){
            num2[cnt2] = str2[i];
            cnt2++;
        }   
    }
    num2[cnt2] = '\0';

    printf("%d", atoi(num1) + atoi(num2));
    

    



    return 0;
}