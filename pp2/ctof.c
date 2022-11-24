/*
 * Exercise 2-3, ctof.c
 * b1021120 Kanta Oikawa
 */

#include <stdio.h>

int main(void) {
  int c;
  double f;

  scanf("%d", &c);

  f = c * (9.0 / 5.0) + 32;

  printf("%d Degrees Celsius is %.2f Degrees Fahrenheit.\n", c, f);

  return 0;
}
