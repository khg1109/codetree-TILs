#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

	int arr[n];
	int cntArr[10] = {0,};

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}


	for (int i = 0; i < n; i++) {
		cntArr[arr[i]]++;
	}

	for (int i = 1; i < 10; i++) {
		printf("%d\n", cntArr[i]);
	}

	return 0;

}