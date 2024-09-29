#include <stdio.h>

int main() {

    int cntArr[4];

    for(int i = 0; i < 3; i++){
        char coldSymptoms;
        int tp;
        scanf("%c %d", &coldSymptoms), &tp;


        if(coldSymptoms == 'Y'){            
            if(tp >= 37){
                cntArr[0]++;
            }
            else{
                cntArr[2]++;
            }
        }
        else{
            if(tp >= 37){
                cntArr[1]++;
            }
            else{
                cntArr[4]++;
            }
        }
    }



    for(int i = 0; i < 4; i++){
        printf("%d ", cntArr[i]);
    }



    return 0;
}