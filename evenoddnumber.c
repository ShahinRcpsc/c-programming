#include <stdio.h>
int main() {
	int a, b, i;
	// a for how many line the program contain.
	// b for input number for checking even or odd
	// i for loop 
	scanf("%d", &a);
	for (i = 1; i <= a; i++){
		scanf("%d", &b);
		if(b % 2 == 0){
			// b will be divided by 2 and if  remainder is 0 then it will print even
			
			printf("even\n");
		}
		else{
			// if  remainder is not  0 then it will print odd
			printf("odd\n");
		}
	}
}
