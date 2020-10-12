#include <stdio.h>
int main() {
	int a, max = 0, i, arr[100];
	scanf("%d", &a);
	for (i = 1; i <= a; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}
