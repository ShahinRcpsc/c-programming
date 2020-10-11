/*
Author:  Shahin Hossain

*/

#include <stdio.h>
int main() {
	int a;
	// there is no input in this file;
        for(a = 1000; a >= 0; a--) {
		if(a % 5 == 0){
			printf("\n");
		}
		printf("%d\t", a);
		
	}
	return 0;
}
