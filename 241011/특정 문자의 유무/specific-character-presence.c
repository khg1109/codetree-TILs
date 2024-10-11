#include <stdio.h>
#include <stdbool.h>
#include <string.h>



int main() {

    char str[100];

    scanf("%s", &str);

    
    bool ee = false;
    bool ab = false;


    for(int i = 0; i < strlen(str)-1; i++){
        if(str[i] == 'e' && str[i+1] == 'e'){
            ee = true;
        }
        else if(str[i] == 'a' && str[i+1] == 'b'){
            ab = true;
        }    
        
    }


    if(ee){
        printf("Yes ");

    }
    else{
        printf("No ");
    }


    if(ab){
        printf("Yes\n");

    }
    else{
        printf("No\n");
    }



    // 여기에 코드를 작성해주세요.
    return 0;
}