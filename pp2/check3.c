/*
 * Exercise 2-1, check3.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  if ((n % 3 == 0) || (n % 10 == 3) || (n / 10 == 3)) {
    puts("satisfy");
  } else {
    puts("not satisfy");
  }

  return 0;
}
