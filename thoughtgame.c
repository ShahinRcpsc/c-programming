#include <stdio.h>
int main() {
	int a, b, c, d, avr;
	scanf("%d", &a);
	for(b = 1; b <= a; b++) {
		scanf("%d%d", &c, &d);
		 avr = (c+d)/2;
		if(avr % 2 == 0) {
			printf("Sadia will be happy.\n");
		}
		else {
			printf("Oops!\n");
		}
	}
	
	return 0;
}
