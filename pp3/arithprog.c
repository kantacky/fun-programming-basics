/*
 * Exercise 3-2, arithprog.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int a[10];
  
  int d;
  scanf("%d", &d);

  a[0] = 0;

  for (int i = 1; i < 10; i++) {
    a[i] = a[i - 1] + d;
  }

  printf("Arithmetic progression a = {");
  for (int i = 0; i < 10; i++) {
    printf("%d, ", a[i]);
  }
  printf("...}\n");

  return 0;
}
