#include <stdio.h>
#include <stirng.h>




int main() {



    char str[100];

    scanf("%s", str);

    str[1] = 'a';
    str[-1] = 'a';

    printf("%d", strlen(str))

    printf("%s", str);

    return 0;
}