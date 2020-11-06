/*
Author: MSHS
Created: 6 Nov, 2020
Problem Link: https://toph.co/p/missing-number

*/


#include <stdio.h>
int main() {
  int a, b, c, d;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  printf("%d", 10 - (b + c + d));

  return 0;
}
