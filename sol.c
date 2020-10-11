#include <stdio.h>
int main() {
	int a = 1000;
//	for(a = 1000; a >= 0; a--)
	
	while(a-- && a > 0) {
		if(a % 5 == 0){
			printf("\n");
		}
		printf("%d\t", a);
		
	}
	return 0;
}
