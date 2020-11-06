/*
Author: MSHS
Created: 6 Nov, 2020
Problem Link: https://toph.co/p/mixed-fractions

*/


#include <stdio.h>
int main() {
	int a, b, s, d, sum, total;
	scanf("%d%d", &a, &b);
	d = a / b;
	s = a - (d * b);
	printf("%d %d %d\n", d, s, b);
 	return 0;
}
