#include <stdio.h>
int main() {
	int sum = 0, a, b, i;
	float avr;
	scanf("%d", &b);
	for(i = 1; i <= b; i++) {
		scanf("%d", &a);
		sum = sum + a;
		avr = (float)sum/i;
		printf("%f\n", avr);
	}
	
	return 0;
}
