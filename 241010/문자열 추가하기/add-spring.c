#include <stdio.h>
#include <string.h>

int main() {

	char a[30];
    char b[20] = "Hello";

    scanf("%s", &a);

	int a_len = strlen(a);
	int b_len = strlen(b);

	for (int i = 0; i < b_len; i++) {
		a[i + a_len] = b[i];
	}

	a[a_len + b_len] = '\0';	
	printf("%s", a);

	return 0;

}