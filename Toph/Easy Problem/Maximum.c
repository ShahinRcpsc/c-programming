/*
Author: MSHS
Created: 6 Nov, 2020
Problem Link: https://toph.co/p/maximum

*/


#include <stdio.h>
int main() {
  int i, a, b, max = 0;
  scanf("%d", &b);
  for (i = 1; i <= b; i++) {
    scanf("%d", &a);
    if (a < max) {
      max = max;
    }
    else {
      max = a;
    }
  }
  printf("%d\n", max);
  return 0;
}
