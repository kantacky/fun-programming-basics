/*
 * Exercise 2-2, lse.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  
  if (a == b) {
    puts("equal");
  } else if (a - b < 10 || a - b > -10) {
    puts("small difference");
  } else {
    puts("large difference");
  }

  return 0;
}
